/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnClose
void Dino_BusSand_App_UI_ContinueBottomPanel__OnClose (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnClose
   void Dino_BusSand_App_UI_ContinueBottomPanel__OnClose (Dino_BusSand_App_UI_ContinueBottomPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__OnClose_22c12fc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9c32a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb6608);
    FUN_02132f7c(PTR_DAT_04cb6610);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c32a = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__IapClose_221840c(param_1,0);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  puVar3 = PTR_DAT_04cb6608;
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x38);
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar9,param_1,*(undefined8 *)puVar3,0);
    if (lVar10 != 0) {
      Dino_BusSand_App_UI_ContinueBottomPager__remove_PageSelected_22bdd80(lVar10,uVar9);
      lVar10 = *(long *)(param_1 + 0x38);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)PTR_DAT_04cb6610,0);
      if (lVar10 != 0) {
        if ((bRam0000000004f9c31e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa458);
          bRam0000000004f9c31e = 1;
        }
        puVar3 = PTR_DAT_04caa458;
        plVar8 = (long *)(lVar10 + 0x30);
        lVar10 = *plVar8;
        while ((plVar5 = (long *)System_Delegate__Remove_4872510(lVar10,uVar9,0),
               plVar5 == (long *)0x0 || (*plVar5 == *(long *)puVar3))) {
          lVar6 = FUN_0216aff4(plVar8,plVar5,lVar10);
          bVar4 = lVar6 == lVar10;
          lVar10 = lVar6;
          if (bVar4) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

