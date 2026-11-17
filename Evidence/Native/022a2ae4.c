/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$HideAllItemTips
void Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, Dino_BusSand_App_UI_ClimbTowerItemView_o* except, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$HideAllItemTips
   void Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, Dino_BusSand_App_UI_ClimbTowerItemView_o* except, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__HideAllItemTips_21a2ae4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9ba41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae8d0);
    FUN_02132f7c(PTR_DAT_04cae8d8);
    FUN_02132f7c(PTR_DAT_04cae8e0);
    FUN_02132f7c(PTR_DAT_04cae8e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae8f0);
    bRam0000000004f9ba41 = 1;
  }
  puVar4 = PTR_DAT_04cae8f0;
  puVar3 = PTR_DAT_04cae8d8;
  puVar2 = PTR_DAT_04cae8d0;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_04cae8e8);
    while( true ) {
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_58,*(undefined8 *)puVar3);
        lVar5 = lStack_48;
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_58,*(undefined8 *)puVar2);
          Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,0,0);
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,param_2,0);
      } while ((uVar6 & 1) == 0);
      if (lVar5 == 0) break;
      Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c(*(undefined8 *)(lVar5 + 0x68),0);
      *(undefined1 *)(lVar5 + 0x40) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

