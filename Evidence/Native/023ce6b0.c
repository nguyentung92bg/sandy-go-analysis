/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<TipAppear>d__78$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__TipAppear_d__78__MoveNext (Dino_BusSand_App_UI_GuidePanel__TipAppear_d__78_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<TipAppear>d__78$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__TipAppear_d__78__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__TipAppear_d__78_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuidePanel__TipAppear_d__78__MoveNext_22ce6b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000004f9c396 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    bRam0000000004f9c396 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_023ce868;
    UnityEngine_Transform__set_localScale_43d1be0
              (_UNK_00e207cc,_UNK_00e207cc,0x3f800000,*(long *)(param_1 + 0x20),0);
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__UiPop_2382f58(**(long **)(lVar2 + 0xb8),0);
    }
  }
  fVar5 = _UNK_00e20390;
  fVar6 = *(float *)(param_1 + 0x28);
  if (fVar6 < _UNK_00e20390) {
    fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar6 = fVar6 + fVar4;
    *(float *)(param_1 + 0x28) = fVar6;
    fVar5 = (float)Dino_BusSand_App_Easing__Evaluate_21609e0(fVar6 / fVar5,10,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      fVar5 = fVar5 * _UNK_00e20994 + _UNK_00e207cc;
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar5,fVar5,0x3f800000,*(long *)(param_1 + 0x20),0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar2,0);
      return 0;
    }
  }
LAB_023ce868:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

