/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Hop>d__48$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__Hop_d__48__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__Hop_d__48_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Hop>d__48$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__Hop_d__48__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__Hop_d__48_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_WinStreakPanel__Hop_d__48__MoveNext_233b4d4(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar5 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar5 = fVar5 + fVar3;
    *(float *)(param_1 + 0x38) = fVar5;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0243b6b4;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x30));
    fVar5 = 0.0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (fVar5 < *(float *)(param_1 + 0x28)) {
    if (lVar2 != 0) {
      fVar5 = (fVar5 / *(float *)(param_1 + 0x28)) * _UNK_00e2082c;
      fVar3 = (float)func_0x049b5320(fVar5);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (0,fVar3 * *(float *)(param_1 + 0x2c) * _UNK_00e20138,lVar2,0);
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 != 0) {
        fVar4 = fVar3 * _UNK_00e20754;
        fVar3 = fVar3 * _UNK_00e20498;
        fVar5 = (float)func_0x049b5320(fVar5 + fVar5);
        UnityEngine_Transform__set_localScale_43d1be0
                  (fVar3 + 1.0 + fVar5 * _UNK_00e20174,fVar4 + 1.0,0x3f800000,lVar2,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
  else {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    if (lVar2 != 0) {
                    /* try { // try from 0243b634 to 0253b723 has its CatchHandler @ 0243b634
                       catch() { ... } // from try @ 0243b634 with catch @ 0243b634
                       catch() { ... } // from try @ 0243b72c with catch @ 0243b634
                       catch() { ... } // from try @ 0243b78c with catch @ 0243b634
                       catch() { ... } // from try @ 0243b7d0 with catch @ 0243b634 */
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                 (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar2,0);
      lVar2 = *(long *)(param_1 + 0x30);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar2 != 0) {
        lVar1 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                   *(undefined4 *)(lVar1 + 0x14),lVar2,0);
        return 0;
      }
    }
  }
LAB_0243b6b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

