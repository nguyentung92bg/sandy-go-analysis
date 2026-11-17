/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Fly
void Dino_BusSand_App_UI_BoosterFly__Fly (int32_t id, UnityEngine_Sprite_o* icon, UnityEngine_Vector3_o from, float size, int32_t index, System_Action_o* landed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Fly
   void Dino_BusSand_App_UI_BoosterFly__Fly (int32_t id, UnityEngine_Sprite_o* icon,
   UnityEngine_Vector3_o from, float size, int32_t index, System_Action_o* landed, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BoosterFly__Fly_217f630
               (undefined4 param_1,float param_2,undefined4 param_3,float param_4,undefined4 param_5
               ,undefined8 param_6,undefined4 param_7,long param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  
  puVar2 = PTR_DAT_04cad528;
  if ((bRam0000000004f9b91c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cad530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0227f6c0 to 0237f6cb has its CatchHandler @ 0227f6fc */
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* try { // try from 0227f6cc to 0237f717 has its CatchHandler @ 0227f5c4 */
    FUN_02132f7c(PTR_DAT_04cad538);
    FUN_02132f7c(PTR_DAT_04cad540);
    FUN_02132f7c(PTR_DAT_04cad548);
    FUN_02132f7c(PTR_DAT_04cad528);
                    /* catch() { ... } // from try @ 0227f6c0 with catch @ 0227f6fc */
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad550);
    bRam0000000004f9b91c = 1;
  }
                    /* try { // try from 0227f718 to 0237f78b has its CatchHandler @ 0227f718
                       catch() { ... } // from try @ 0227f718 with catch @ 0227f718
                       catch() { ... } // from try @ 0227f798 with catch @ 0227f718 */
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar4 == 0) goto LAB_0227fce4;
  plVar15 = (long *)(lVar4 + 0x60);
  *plVar15 = param_8;
  thunk_FUN_02134474(plVar15,param_8);
  *(undefined4 *)(lVar4 + 0x68) = param_7;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar12 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 0227f78c to 0237f797 has its CatchHandler @ 0227f7c8 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0227f798 to 0237f7e3 has its CatchHandler @ 0227f718 */
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_6,0,0);
    if ((uVar5 & 1) == 0) {
      if (lVar12 != 0) {
        lVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
        plVar15 = (long *)(lVar4 + 0x50);
        *plVar15 = lVar12;
        thunk_FUN_02134474(plVar15,lVar12);
        puVar3 = PTR_DAT_04cad4f8;
                    /* try { // try from 0227f84c to 0237f853 has its CatchHandler @ 0227f8f0 */
        if (*(int *)(*(long *)PTR_DAT_04cad4f8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0227f85c to 0237f863 has its CatchHandler @ 0227f914 */
        lVar12 = Dino_BusSand_App_UI_BoosterFly__Target_217fcf0(param_5,lVar4 + 0x58);
        plVar13 = (long *)(lVar4 + 0x48);
        *plVar13 = lVar12;
        thunk_FUN_02134474(plVar13,lVar12);
        uVar14 = *(undefined8 *)(lVar4 + 0x50);
                    /* try { // try from 0227f880 to 0237f887 has its CatchHandler @ 0227f90c */
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                    /* try { // try from 0227f88c to 0237f88f has its CatchHandler @ 0227f8f8 */
          thunk_FUN_0218fdac();
        }
        fVar19 = 0.0;
                    /* try { // try from 0227f8a8 to 0237f8ab has its CatchHandler @ 0227f8f4 */
        plVar6 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (param_4,param_4,0,0,0x3f800000,uVar14,
                                    *(undefined8 *)PTR_DAT_04cad550,0,0,0);
        if (plVar6 != (long *)0x0) {
          UnityEngine_UI_Image__set_sprite_44a7258(plVar6,param_6,0);
          UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar6,1,0);
                    /* try { // try from 0227f8e8 to 0237f8ef has its CatchHandler @ 0227f914 */
                    /* catch() { ... } // from try @ 0227f84c with catch @ 0227f8f0
                       try { // try from 0227f8f0 to 0237f93f has its CatchHandler @ 0227f7e4 */
                    /* catch() { ... } // from try @ 0227f8a8 with catch @ 0227f8f4 */
                    /* catch() { ... } // from try @ 0227f88c with catch @ 0227f8f8 */
          (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
          lVar12 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar6,0);
                    /* catch() { ... } // from try @ 0227f880 with catch @ 0227f90c */
                    /* catch() { ... } // from try @ 0227f85c with catch @ 0227f914
                       catch() { ... } // from try @ 0227f8e8 with catch @ 0227f914 */
          plVar6 = (long *)(lVar4 + 0x10);
          *plVar6 = lVar12;
          thunk_FUN_02134474(plVar6,lVar12);
          lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar12 != 0) {
            lVar8 = *(long *)(lVar12 + 0x10);
            lVar7 = *plVar6;
            lVar11 = *(long *)PTR_DAT_04cad530;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar7;
                thunk_FUN_02134474(plVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar12,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              if (*plVar15 != 0) {
                uVar16 = UnityEngine_Transform__InverseTransformPoint_43d3ffc
                                   (param_1,param_2,param_3,*plVar15,0);
                lVar12 = *(long *)puVar2;
                *(undefined4 *)(lVar4 + 0x1c) = uVar16;
                *(float *)(lVar4 + 0x20) = param_2;
                uVar14 = *(undefined8 *)(lVar4 + 0x48);
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
                lVar12 = *plVar15;
                if ((uVar5 & 1) == 0) {
                  if (lVar12 == 0) goto LAB_0227fce4;
                  fVar17 = *(float *)(lVar4 + 0x1c);
                  UnityEngine_RectTransform__get_rect_43cf450(lVar12,0);
                  fVar17 = fVar17 * _UNK_00e2098c;
                  param_2 = fVar19 * -0.5 - param_4;
                }
                else {
                  if ((*plVar13 == 0) ||
                     (UnityEngine_Transform__get_position_43d0e48(*plVar13,0), lVar12 == 0))
                  goto LAB_0227fce4;
                  fVar17 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar12,0);
                }
                lVar12 = *(long *)puVar2;
                *(float *)(lVar4 + 0x38) = fVar17;
                *(float *)(lVar4 + 0x3c) = param_2;
                uVar14 = *(undefined8 *)(lVar4 + 0x48);
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
                fVar17 = _UNK_00e20994;
                if ((uVar5 & 1) != 0) {
                  if (*plVar13 == 0) goto LAB_0227fce4;
                  UnityEngine_RectTransform__get_rect_43cf450(*plVar13,0);
                  fVar17 = 0.75;
                  if (*(char *)(lVar4 + 0x58) != '\0') {
                    fVar17 = 0.5;
                  }
                  param_4 = (fVar19 * fVar17) / param_4;
                  fVar19 = 1.0;
                  if (param_4 <= 1.0) {
                    fVar19 = param_4;
                  }
                  fVar17 = _UNK_00e20328;
                  if (_UNK_00e20328 <= param_4) {
                    fVar17 = fVar19;
                  }
                }
                uVar14 = _UNK_00e69d50;
                uVar18 = *(undefined8 *)(lVar4 + 0x1c);
                *(float *)(lVar4 + 0x40) = fVar17;
                fVar20 = (float)uVar18 + (float)uVar14;
                fVar17 = (float)((ulong)uVar18 >> 0x20);
                fVar21 = fVar17 + (float)((ulong)uVar14 >> 0x20);
                fVar19 = -1.0;
                if ((*(uint *)(lVar4 + 0x68) & 1) != 0) {
                  fVar19 = 1.0;
                }
                fVar22 = (float)*(undefined8 *)(lVar4 + 0x38);
                *(ulong *)(lVar4 + 0x24) = CONCAT44(fVar21,fVar20);
                *(undefined4 *)(lVar4 + 0x18) = 0x3f47ae14;
                *(float *)(lVar4 + 0x2c) = fVar19 * 20.0;
                *(ulong *)(lVar4 + 0x30) =
                     CONCAT44((fVar21 + (float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20)) * 0.5
                              + 220.0,(fVar20 + fVar22) * 0.5 +
                                      fVar19 * 120.0 + (fVar20 - fVar22) * 0.25);
                if (*(long *)(lVar4 + 0x10) != 0) {
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (uVar18,fVar17,0,*(long *)(lVar4 + 0x10),0);
                  lVar12 = *plVar6;
                  if (cRam0000000004f9b65d == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9b65d = '\x01';
                  }
                  if (lVar12 != 0) {
                    puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    UnityEngine_Transform__set_localScale_43d1be0
                              (*puVar10,puVar10[1],puVar10[2],lVar12,0);
                    uVar16 = *(undefined4 *)(lVar4 + 0x18);
                    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                    System_Action_float____ctor_35f1448
                              (uVar14,lVar4,*(undefined8 *)PTR_DAT_04cad538,0);
                    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar12 = Dino_BusSand_App_Tween__Value_2160f64(uVar16,uVar14,0);
                    fVar19 = _UNK_00e20658;
                    if ((lVar12 != 0) &&
                       (lVar12 = Dino_BusSand_App_Tween__SetDelay_2160ea8
                                           ((float)*(int *)(lVar4 + 0x68) * _UNK_00e20658,lVar12,0),
                       lVar12 != 0)) {
                      lVar12 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar12,1,0);
                      puVar2 = PTR_DAT_04caa458;
                      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                      System_Action___ctor_47b5ed0(uVar14,lVar4,*(undefined8 *)PTR_DAT_04cad540,0);
                      if (lVar12 != 0) {
                        Dino_BusSand_App_Tween__OnDone_2160edc(lVar12,uVar14,0);
                        iVar23 = *(int *)(lVar4 + 0x68);
                        uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0227fc84 to 0237fce7 has its CatchHandler @ 0227fc84
                       catch() { ... } // from try @ 0227fc84 with catch @ 0227fc84
                       catch() { ... } // from try @ 0227fcf4 with catch @ 0227fc84 */
                        System_Action___ctor_47b5ed0(uVar14,lVar4,*(undefined8 *)PTR_DAT_04cad548,0)
                        ;
                        lVar4 = Dino_BusSand_App_Tween__Delayed_2161264
                                          ((float)iVar23 * fVar19 + _UNK_00e2065c + _UNK_00e201f4,
                                           uVar14,0);
                        if (lVar4 != 0) {
                          *(undefined1 *)(lVar4 + 0x30) = 1;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0227fce4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* catch() { ... } // from try @ 0227f78c with catch @ 0227f7c8 */
  lVar4 = *plVar15;
  if (lVar4 != 0) {
                    /* try { // try from 0227f7e4 to 0237f84b has its CatchHandler @ 0227f7e4
                       catch() { ... } // from try @ 0227f7e4 with catch @ 0227f7e4
                       catch() { ... } // from try @ 0227f8f0 with catch @ 0227f7e4 */
                    /* WARNING: Could not recover jumptable at 0x0227f7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}

