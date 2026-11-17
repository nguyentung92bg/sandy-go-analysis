/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$OnGranted
void Dino_BusSand_App_UI_DailyGiftPanel__OnGranted (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, System_Collections_Generic_List_KeyValuePair_int__long___o* got, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$OnGranted
   void Dino_BusSand_App_UI_DailyGiftPanel__OnGranted (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   System_Collections_Generic_List_KeyValuePair_int__long___o* got, int32_t times, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_DailyGiftPanel__OnGranted_232c094
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04cb8f58;
  if ((bRam0000000004f9c605 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cb21e8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8f60);
    FUN_02132f7c(PTR_DAT_04cb8f68);
    FUN_02132f7c(PTR_DAT_04cb8f58);
    FUN_02132f7c(PTR_DAT_04cb8f70);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04caf5b0);
    FUN_02132f7c(PTR_DAT_04caf318);
    bRam0000000004f9c605 = 1;
  }
  uStack_68 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass51_0___ctor_232cf68(lVar8,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (lVar8 == 0) goto LAB_0242c814;
  *(long *)(lVar8 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar8 + 0x10),param_1);
  if (1 < param_3) {
    Dino_BusSand_App_UI_RewardPopup__CountTimes_2325750(*(undefined8 *)(param_1 + 0x88),param_3);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    iVar6 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
    puVar4 = PTR_DAT_04cb21e8;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    uStack_68 = CONCAT44(iVar6,(undefined4)uStack_68);
    if (*(int *)(*(long *)PTR_DAT_04cb21e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar7 = Dino_BusSand_App_Meta_DailyGift__get_ChestProgress_220e058(0);
    if (cRam0000000004f9bdfb == '\0') {
      FUN_02132f7c(PTR_DAT_04cb21e8);
      cRam0000000004f9bdfb = '\x01';
    }
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar4;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_0242c814;
    iVar2 = *(int *)(**(long **)(lVar10 + 0xb8) + 0x18);
    iVar1 = iVar6;
    if (iVar2 < 1) {
      iVar1 = iVar7;
    }
    uVar14 = *(undefined8 *)PTR_DAT_04cac208;
    *(float *)(lVar8 + 0x18) = (float)(iVar1 + -1);
    *(float *)(lVar8 + 0x1c) = (float)iVar1;
    uVar14 = thunk_FUN_0216e89c(uVar14);
    System_Action_float____ctor_35f1448(uVar14,lVar8,*(undefined8 *)PTR_DAT_04cb8f68,0);
    puVar4 = PTR_DAT_04cac1e8;
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = _UNK_00e2098c;
    lVar10 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e2098c,uVar14,0);
    if ((lVar10 == 0) ||
       (lVar10 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar10,1,0), lVar10 == 0))
    goto LAB_0242c814;
    Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar10,param_1,0);
    puVar5 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar5;
    }
    if (**(long **)(lVar10 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Fill_238370c
                (*(float *)(lVar8 + 0x1c) / (float)iVar6,**(long **)(lVar10 + 0xb8),0);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    if ((uVar9 & 1) != 0) {
      plVar13 = *(long **)(param_1 + 0x80);
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar1);
      uVar14 = System_Int32__ToString_482d750(&uStack_68,0);
      uVar11 = System_Int32__ToString_482d750((long)&uStack_68 + 4,0);
      uVar14 = System_String__Concat_46d2b84(uVar14,*(undefined8 *)PTR_DAT_04cabd10,uVar11,0);
      if (plVar13 == (long *)0x0) goto LAB_0242c814;
      (**(code **)(*plVar13 + 0x518))(plVar13,uVar14,*(undefined8 *)(*plVar13 + 0x520));
    }
    if (0 < iVar2) {
      uVar14 = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if ((uVar9 & 1) != 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e207cc,0x3f000000,uVar14,0,0,0);
      }
      puVar5 = PTR_DAT_04cb8f70;
      lVar8 = *(long *)PTR_DAT_04cb8f70;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar5;
      }
      puVar12 = *(undefined8 **)(lVar8 + 0xb8);
      lVar10 = puVar12[1];
      if (lVar10 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar14 = *puVar12;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar10,uVar14,*(undefined8 *)PTR_DAT_04cb8f60,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
        *plVar13 = lVar10;
        thunk_FUN_02134474(plVar13,lVar10);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Tween__Delayed_2161264(uVar16,lVar10,0);
      if ((lVar8 == 0) ||
         (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 == 0))
      goto LAB_0242c814;
      Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,param_1,0);
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar14,0);
  lVar10 = *(long *)(param_1 + 0x60);
  lVar8 = lVar10;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    lVar8 = *(long *)(param_1 + 0x60);
    cRam0000000004f9b948 = '\x01';
  }
  if (lVar8 != 0) {
    uVar16 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar17 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    fVar15 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04cb8dc0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (uVar16,uVar17,fVar15 * 0.5 + -32.0,0xc3000000c3000000,_UNK_00e1fed4,lVar10,
                       *(undefined8 *)PTR_DAT_04caf5b0,*(undefined8 *)PTR_DAT_04caf318,0,0);
    if (lVar8 != 0) {
      lVar10 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      puVar3 = PTR_DAT_04caa208;
      if (lVar10 != 0) {
        uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
        UnityEngine_Transform__set_localScale_43d1be0
                  ((float)uVar14 * 1.8,(float)((ulong)uVar14 >> 0x20) * 1.8,
                   *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * _UNK_00e203f0,
                   lVar10,0);
        uVar14 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar16 = *(undefined4 *)(lVar8 + 0xc);
        uVar17 = *(undefined4 *)(lVar8 + 0x10);
        uVar18 = *(undefined4 *)(lVar8 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = Dino_BusSand_App_Tween__Scale_2161548(uVar16,uVar17,uVar18,_UNK_00e20aec,uVar14,0);
        if (((lVar8 != 0) &&
            (lVar8 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar8,10,0), lVar8 != 0)) &&
           (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 != 0)) {
          Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,param_1,0);
          puVar3 = PTR_DAT_04cad568;
          if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar3;
          }
          if (**(long **)(lVar8 + 0xb8) != 0) {
            Dino_BusSand_GameAudio__UiPop_2382f58(**(long **)(lVar8 + 0xb8),0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Play_2388ed8(2,0);
          return;
        }
      }
    }
  }
LAB_0242c814:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

