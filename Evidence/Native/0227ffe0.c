/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Impact
void Dino_BusSand_App_UI_BoosterFly__Impact (UnityEngine_RectTransform_o* layer, UnityEngine_RectTransform_o* target, UnityEngine_Vector2_o at, bool home, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Impact
   void Dino_BusSand_App_UI_BoosterFly__Impact (UnityEngine_RectTransform_o* layer,
   UnityEngine_RectTransform_o* target, UnityEngine_Vector2_o at, bool home, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BoosterFly__Impact_217ffe0
               (undefined4 param_1,undefined4 param_2,undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar2 = PTR_DAT_04cad560;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b91d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cad570);
    FUN_02132f7c(PTR_DAT_04cad578);
    FUN_02132f7c(PTR_DAT_04cad560);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9b91d = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_6,0,0);
  uVar7 = _UNK_00e207cc;
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar10 = _UNK_00e2065c;
  if ((param_7 & 1) == 0) {
    uVar10 = _UNK_00e207cc;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_UiMotion__Punch_2283d78(uVar10,_UNK_00e2098c,param_6,0,0,0);
  if (param_6 != 0) {
    UnityEngine_RectTransform__get_rect_43cf450(param_6,0);
    fVar9 = 220.0;
    if (220.0 <= param_4 * _UNK_00e205ec) {
      fVar9 = param_4 * _UNK_00e205ec;
    }
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar10 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar11 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
                    /* try { // try from 022801e0 to 02380237 has its CatchHandler @ 022801e0
                       catch() { ... } // from try @ 022801e0 with catch @ 022801e0
                       catch() { ... } // from try @ 02280254 with catch @ 022801e0 */
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,_UNK_00e2038c,_UNK_00e20094,0x3f800000,&uStack_88,
               *(undefined8 *)PTR_DAT_04cac878);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_90 = uStack_78;
    lVar5 = Dino_BusSand_App_UI_UiKit__Rays_228ce00
                      (fVar9,uVar10,uVar11,_UNK_00e1fea8,0x42700000,param_5,&uStack_a0,0);
                    /* try { // try from 02280238 to 02380253 has its CatchHandler @ 02280280 */
    if (lVar3 != 0) {
      plVar8 = (long *)(lVar3 + 0x18);
      *plVar8 = lVar5;
      thunk_FUN_02134474(plVar8,lVar5);
                    /* try { // try from 02280254 to 02380293 has its CatchHandler @ 022801e0 */
      if (*plVar8 != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(param_1,param_2,0,*plVar8,0);
                    /* catch() { ... } // from try @ 02280238 with catch @ 02280280 */
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,uVar7,_UNK_00e208cc,_UNK_00e20660,*plVar8,0,0,0);
        if (*plVar8 != 0) {
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
          uVar6 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar6,0);
          *(undefined8 *)(lVar3 + 0x10) = uVar6;
          thunk_FUN_02134474();
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cad570,0);
          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20590,uVar6,0);
          if ((lVar5 != 0) &&
             (lVar5 = Dino_BusSand_App_Tween__SetDelay_2160ea8(_UNK_00e201f4,lVar5,0), lVar5 != 0))
          {
            lVar5 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar5,1,0);
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cad578,0);
            if (lVar5 != 0) {
              Dino_BusSand_App_Tween__OnDone_2160edc(lVar5,uVar6,0);
              puVar1 = PTR_DAT_04cad568;
              if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b94e == '\0') {
                FUN_02132f7c(PTR_DAT_04cad568);
                cRam0000000004f9b94e = '\x01';
              }
              lVar3 = *(long *)puVar1;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar3 = *(long *)puVar1;
              }
              if (**(long **)(lVar3 + 0xb8) != 0) {
                Dino_BusSand_GameAudio__UiPop_2382f58(**(long **)(lVar3 + 0xb8),0);
                lVar3 = *(long *)puVar1;
              }
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b94e == '\0') {
                FUN_02132f7c(PTR_DAT_04cad568);
                cRam0000000004f9b94e = '\x01';
              }
              lVar3 = *(long *)puVar1;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar3 = *(long *)puVar1;
              }
              if (**(long **)(lVar3 + 0xb8) != 0) {
                Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar3 + 0xb8),0);
              }
              uVar7 = 1;
              if ((param_7 & 1) != 0) {
                uVar7 = 2;
              }
              if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_Haptics__Play_2388ed8(uVar7,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

