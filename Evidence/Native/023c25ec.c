/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<PinToFirstPageNextFrame>d__36$$MoveNext
bool Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_d__36__MoveNext (Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_d__36_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<PinToFirstPageNextFrame>d__36$$MoveNext
   bool Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_d__36__MoveNext
   (Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_d__36_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_App_UI_ContinueBottomPanel__PinToFirstPageNextFrame_d__36__MoveNext_22c25ec
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c33e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c33e = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_023c26c0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_023c26c0;
      Dino_BusSand_App_UI_ContinueBottomPager__GoToPage_22be6b8
                (0xbf800000,*(long *)(lVar3 + 0x38),0,0);
      Dino_BusSand_App_UI_ContinueBottomPanel__StartAutoPlay_22c1e60(lVar3);
    }
  }
  return iVar1 == 0;
}

