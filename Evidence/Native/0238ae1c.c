/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$Ripple
void Dino_BusSand_App_UI_TapRipple__Ripple (Dino_BusSand_App_UI_TapRipple_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$Ripple
   void Dino_BusSand_App_UI_TapRipple__Ripple (Dino_BusSand_App_UI_TapRipple_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

void Dino_BusSand_App_UI_TapRipple__Ripple_228ae1c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cb5170;
  if ((bRam0000000004f9c176 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5178);
    FUN_02132f7c(PTR_DAT_04cb5180);
    FUN_02132f7c(PTR_DAT_04cb5170);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb5188);
    FUN_02132f7c(PTR_DAT_04cb5190);
    bRam0000000004f9c176 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_28 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (lVar7 != 0) {
    uVar5 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar7,4,0);
    uVar9 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabda8);
    }
    uVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                      (param_1,param_2,uVar5,uVar9,&uStack_28,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (0x43160000,0x43160000,0,0,0x3f800000,uVar5,*(undefined8 *)PTR_DAT_04cb5188,
                       *(undefined8 *)PTR_DAT_04cb5190,0);
    if (lVar3 != 0) {
      plVar8 = (long *)(lVar3 + 0x18);
      *plVar8 = lVar7;
      thunk_FUN_02134474(plVar8,lVar7);
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
        if (*plVar8 != 0) {
          lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar8,0);
          plVar6 = (long *)(lVar3 + 0x10);
          *plVar6 = lVar7;
          thunk_FUN_02134474(plVar6,lVar7);
          if (*plVar6 != 0) {
            UnityEngine_Transform__set_localPosition_43cfda8
                      (uStack_28 & 0xffffffff,uStack_28._4_4_,0,*plVar6,0);
            lVar7 = *plVar6;
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            if (lVar7 != 0) {
              uVar5 = NEON_fmov(0x3e800000,4);
              uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
              fVar10 = (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
              UnityEngine_Transform__set_localScale_43d1be0
                        (CONCAT44(fVar10,(float)uVar9 * (float)uVar5),fVar10,
                         *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * 0.25,lVar7
                         ,0);
              plVar8 = (long *)*plVar8;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0x3f400000,plVar8,
                           *(undefined8 *)(*plVar8 + 0x2b0));
                uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                System_Action_float____ctor_35f1448(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cb5178,0);
                if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar7 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20104,uVar5,0);
                if (lVar7 != 0) {
                  lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0);
                  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  System_Action___ctor_47b5ed0(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cb5180,0);
                  if (lVar7 != 0) {
                    Dino_BusSand_App_Tween__OnDone_2160edc(lVar7,uVar5,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

