/* IL2CPP: Dino.BusSand.App.UI.HallScene$$RestoreLights
void Dino_BusSand_App_UI_HallScene__RestoreLights (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$RestoreLights
   void Dino_BusSand_App_UI_HallScene__RestoreLights (Dino_BusSand_App_UI_HallScene_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__RestoreLights_22d2c20(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c3bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6d90);
    FUN_02132f7c(PTR_DAT_04cb6d98);
    FUN_02132f7c(PTR_DAT_04cb6da0);
    FUN_02132f7c(PTR_DAT_04cb6da8);
    FUN_02132f7c(PTR_DAT_04cb6db0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3bf = 1;
  }
  puVar4 = PTR_DAT_04cb6d98;
  puVar3 = PTR_DAT_04cb6d90;
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cb6db0);
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar4), lVar6 = lStack_38, (uVar5 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_Behaviour__set_enabled_43bc50c(lVar6,1,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar3);
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

