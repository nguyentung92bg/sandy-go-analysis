/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Restart
void Dino_BusSand_App_UI_HomeAtelier__Restart (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Restart
   void Dino_BusSand_App_UI_HomeAtelier__Restart (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Restart_22d77b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c3d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6fd8);
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3d6 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
     puVar4 = PTR_DAT_04cb6fd8, puVar3 = PTR_DAT_04cb6ec0, puVar2 = PTR_DAT_04cb6eb8,
     puVar1 = PTR_DAT_04cabaf8, lVar6 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04cb6ed0);
    while (uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                             (&uStack_58,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      Dino_BusSand_App_UI_HomeAtelier__Free_22d6598(uVar7,uStack_48);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_58,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x78) != 0) {
      System_Collections_Generic_Dictionary_int__object___Clear_34374b4
                (*(long *)(param_1 + 0x78),*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      *(int *)(param_1 + 0x58) = iVar5;
      *(float *)(param_1 + 0x5c) = (float)iVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

