/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Appear
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Appear (UnityEngine_Transform_o* t, float delay, float from, float duration, float overshoot, System_Nullable_Vector3__o baseScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Appear
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Appear (UnityEngine_Transform_o* t, float
   delay, float from, float duration, float overshoot, System_Nullable_Vector3__o baseScale, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  puVar1 = PTR_DAT_04cb5270;
  uVar13 = param_2;
  uVar14 = param_3;
  if ((bRam0000000004f9c1c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb5278);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4e78);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5280);
    FUN_02132f7c(PTR_DAT_04cb5288);
    FUN_02132f7c(PTR_DAT_04cb5290);
    FUN_02132f7c(PTR_DAT_04cb5298);
    FUN_02132f7c(PTR_DAT_04cb5270);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c1c1 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 == 0) goto LAB_0238e51c;
  plVar8 = (long *)(lVar3 + 0x18);
  *plVar8 = param_5;
  thunk_FUN_02134474(plVar8,param_5);
  lVar4 = *(long *)puVar1;
  lVar10 = *plVar8;
  *(undefined4 *)(lVar3 + 0x20) = param_2;
  *(undefined4 *)(lVar3 + 0x30) = param_4;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0238e240 to 0248e2c7 has its CatchHandler @ 0238e240
                       catch() { ... } // from try @ 0238e240 with catch @ 0238e240
                       catch() { ... } // from try @ 0238e2cc with catch @ 0238e240
                       catch() { ... } // from try @ 0238e30c with catch @ 0238e240
                       catch() { ... } // from try @ 0238e380 with catch @ 0238e240 */
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  puVar1 = PTR_DAT_04cad7b8;
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  lVar4 = *plVar8;
  if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar15 = Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0(lVar4);
  if ((auVar15._0_8_ & 0xff) == 0) {
    if ((param_6 & 0xff) != 0) {
      uVar14 = (undefined4)((ulong)param_7 >> 0x20);
      uVar13 = (undefined4)param_7;
      goto LAB_0238e2c0;
    }
    if (*plVar8 == 0) goto LAB_0238e51c;
    uVar12 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar8,0);
  }
  else {
    uVar14 = auVar15._12_4_;
    uVar13 = auVar15._8_4_;
    param_6 = auVar15._0_8_;
LAB_0238e2c0:
    uVar12 = (undefined4)(param_6 >> 0x20);
  }
                    /* try { // try from 0238e2c8 to 0248e2cb has its CatchHandler @ 0238e2dc */
                    /* try { // try from 0238e2cc to 0248e2f3 has its CatchHandler @ 0238e240 */
  *(undefined4 *)(lVar3 + 0x24) = uVar12;
  *(undefined4 *)(lVar3 + 0x28) = uVar13;
  *(undefined4 *)(lVar3 + 0x2c) = uVar14;
  if (*(long *)(lVar3 + 0x18) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0238e2c8 with catch @ 0238e2dc
                        */
    uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x18),0);
    puVar2 = PTR_DAT_04cad4c0;
                    /* try { // try from 0238e2f4 to 0248e30b has its CatchHandler @ 0238e378 */
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
    }
    uVar6 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar6);
                    /* try { // try from 0238e30c to 0248e367 has its CatchHandler @ 0238e240 */
    *(undefined8 *)(lVar3 + 0x38) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar6);
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(uVar6,0);
    if (*plVar8 != 0) {
      fVar11 = *(float *)(lVar3 + 0x20);
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar11 * *(float *)(lVar3 + 0x24),fVar11 * *(float *)(lVar3 + 0x28),
                 *(float *)(lVar3 + 0x2c) * fVar11,*plVar8,0);
                    /* try { // try from 0238e368 to 0248e377 has its CatchHandler @ 0238e378 */
      if (*(long *)(lVar3 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0238e2f4 with catch @ 0238e378
                       catch() { ... } // from try @ 0238e368 with catch @ 0238e378 */
        UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*(long *)(lVar3 + 0x38),0);
                    /* try { // try from 0238e37c to 0248e37f has its CatchHandler @ 0238e388 */
                    /* try { // try from 0238e380 to 0248e38b has its CatchHandler @ 0238e240 */
        lVar4 = *plVar8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0238e37c with catch @ 0238e388
                        */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_UI_KitAdopt__Edited_227dd34(lVar4);
        if ((uVar5 & 1) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,1);
          if (lVar4 == 0) goto LAB_0238e51c;
          if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar13 = *(undefined4 *)(lVar3 + 0x2c);
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x24);
          *(undefined4 *)(lVar4 + 0x28) = uVar13;
        }
        plVar8 = (long *)(lVar3 + 0x10);
        *plVar8 = lVar4;
        thunk_FUN_02134474(plVar8);
        if (*plVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar3 + 0x18);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5278);
          System_Func_Vector3____ctor_379f5bc(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cb5280,0);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
          System_Action_Vector3____ctor_35f2828(uVar7,lVar3,*(undefined8 *)PTR_DAT_04cb5288,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_KitAdopt__RestScale_227de60(uVar9,uVar6,uVar7);
        }
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cb5290,0);
        uVar9 = *(undefined8 *)(lVar3 + 0x18);
        uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar7,lVar3,*(undefined8 *)PTR_DAT_04cb5298,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04cac1e8;
        if ((bRam0000000004f9c1bd & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa210);
          FUN_02132f7c(PTR_DAT_04cb4ce0);
          FUN_02132f7c(PTR_DAT_04cac1e8);
          bRam0000000004f9c1bd = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Tween__Value_2160f64(param_3,uVar6,0);
        if (((lVar3 != 0) &&
            (lVar3 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), lVar3 != 0)) &&
           (lVar3 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar3,uVar9,0), lVar3 != 0)) {
          lVar3 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar3,uVar7,0);
          if (0.0 < param_1) {
            if (lVar3 == 0) goto LAB_02390cdc;
            Dino_BusSand_App_Tween__SetDelay_2160ea8(param_1,lVar3,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Application__get_isPlaying_4351eec(0);
          puVar1 = PTR_DAT_04cb4ce0;
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)PTR_DAT_04cb4ce0;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar1;
            }
            if (*(char *)(*(long *)(lVar4 + 0xb8) + 1) == '\0') {
              return lVar3;
            }
          }
          if (lVar3 != 0) {
            Dino_BusSand_App_Tween__Kill_2160f04(lVar3,1,0);
            return lVar3;
          }
        }
LAB_02390cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_0238e51c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

