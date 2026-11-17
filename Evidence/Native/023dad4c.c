/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDestroy
void Dino_BusSand_App_UI_HomeAtelier__OnDestroy (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDestroy
   void Dino_BusSand_App_UI_HomeAtelier__OnDestroy (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__OnDestroy_22dad4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c3e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6fd8);
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3e7 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar5 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
     puVar4 = PTR_DAT_04cb6fd8, puVar3 = PTR_DAT_04cb6ec0, puVar2 = PTR_DAT_04cb6eb8,
     puVar1 = PTR_DAT_04ca9ae8, lVar5 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_78,lVar5,*(undefined8 *)PTR_DAT_04cb6ed0);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                             (&uStack_60,*(undefined8 *)puVar3), lVar5 = lStack_50, (uVar6 & 1) != 0
          ) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_50 + 0x50) != 0) {
        Dino_BusSand_View_PicturePaper__Dispose_23dc83c(*(long *)(lStack_50 + 0x50),0);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar7,0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_60,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x78) != 0) {
      System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                (*(long *)(param_1 + 0x78),*(undefined8 *)puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

