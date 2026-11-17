/* IL2CPP: Dino.BusSand.View.GameView$$OnColorCleared
void Dino_BusSand_View_GameView__OnColorCleared (Dino_BusSand_View_GameView_o* __this, uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnColorCleared
   void Dino_BusSand_View_GameView__OnColorCleared (Dino_BusSand_View_GameView_o* __this, uint8_t
   color, const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnColorCleared_23a7298
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f9c938 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc5c0);
    FUN_02132f7c(PTR_DAT_04cbc5c8);
    FUN_02132f7c(PTR_DAT_04cbc5d0);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc5d8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c938 = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  if (*(long *)(param_5 + 0x200) == 0) goto LAB_024a7a24;
  uVar9 = System_Collections_Generic_Dictionary_byte__ValueTuple_int__float____TryGetValue_33a0dec
                    (*(long *)(param_5 + 0x200),param_6,&uStack_88,*(undefined8 *)PTR_DAT_04cbc5d8);
  if ((uVar9 & 1) != 0) {
    fVar12 = (float)UnityEngine_Time__get_time_43cd540(0);
    fVar22 = 1.0;
    if (fVar12 - uStack_88._4_4_ < 1.0) {
      if (*(long *)(param_5 + 0xe0) == 0) goto LAB_024a7a24;
      uVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_5 + 0xe0),uStack_88 & 0xffffffff,&lStack_90,
                         *(undefined8 *)PTR_DAT_04cbc4b8);
      if ((uVar9 & 1) != 0) {
        if (lStack_90 == 0) goto LAB_024a7a24;
        if (*(int *)(lStack_90 + 0x2c) == 4) {
          fVar12 = (float)Dino_BusSand_View_VehicleView__get_Velocity_23f3acc(lStack_90,0);
          if (lStack_90 == 0) goto LAB_024a7a24;
          fVar21 = *(float *)(param_5 + 0x44);
          fVar24 = param_3;
          fVar17 = fVar22;
          fVar13 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_90,0);
          fVar19 = fVar24;
          fVar18 = fVar17;
          if (cRam0000000004f9bcf8 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9bcf8 = '\x01';
          }
          if (*(long *)(param_5 + 0x30) == 0) goto LAB_024a7a24;
          fVar14 = *(float *)(*(long *)(param_5 + 0x30) + 0x60);
          fVar20 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
          uVar23 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
          uVar9 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
          if ((uVar9 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_6,0);
            fVar15 = (float)(uVar8 & 0xff) / 255.0;
            fVar18 = (float)(uVar8 >> 8 & 0xff) / 255.0;
            fVar19 = (float)(uVar8 >> 0x10 & 0xff) / 255.0;
            param_4 = (float)(uVar8 >> 0x18) / 255.0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar15 = (float)Dino_BusSand_View_PackPalette__Main_2390528(param_6);
          }
          uVar7 = FUN_023e4c88(0);
          puVar6 = PTR_DAT_04cb2870;
          if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb2870);
          }
          uVar8 = Dino_BusSand_View_GameView__Vivid_23a906c(uVar7,param_6 & 0xff);
          fVar3 = _UNK_00e2098c;
          if (*(long *)(param_5 + 0xb8) == 0) goto LAB_024a7a24;
          uVar9 = NEON_ushl(CONCAT44(uVar8,uVar8),_UNK_00e6a7d0,4);
          uVar16 = NEON_ucvtf(uVar9 & 0xff000000ff,4);
          fVar25 = (float)uVar16 / 255.0;
          fVar26 = (float)((ulong)uVar16 >> 0x20) / 255.0;
          fVar17 = fVar17 + (float)((ulong)uVar23 >> 0x20) * fVar14 * 0.4;
          uVar23 = CONCAT44(fVar17,fVar13 + (float)uVar23 * fVar14 * 0.4);
          fVar13 = (float)(uVar8 & 0xff) / 255.0;
          uVar16 = NEON_fmov(0x3f800000,4);
          if (fVar21 <= 1.0) {
            fVar21 = 1.0;
          }
          fVar24 = fVar24 + fVar20 * fVar14 * _UNK_00e2098c;
          Dino_BusSand_View_Fx__Ring_2398a10
                    (uVar23,fVar17,fVar24,fVar13 + (1.0 - fVar13) * _UNK_00e20590,
                     fVar25 + ((float)uVar16 - fVar25) * 0.35,
                     fVar26 + ((float)((ulong)uVar16 >> 0x20) - fVar26) * 0.35,_UNK_00e2038c,
                     _UNK_00e1ff60,*(long *)(param_5 + 0xb8));
          if (*(long *)(param_5 + 0xb8) == 0) goto LAB_024a7a24;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          Dino_BusSand_View_Fx__Stars_2392818
                    (uVar23,fVar17,fVar24,_UNK_00e2009c,_UNK_00e203f4,fVar12 * fVar21,
                     fVar22 * fVar21,param_3 * fVar21,*(long *)(param_5 + 0xb8),8,&uStack_d0);
          uVar9 = uStack_88;
          lVar11 = *(long *)(param_5 + 0xb0);
          uVar7 = FUN_023e4c88(fVar15,fVar18,fVar19,param_4,0);
          if (*(long *)(param_5 + 0x30) == 0) goto LAB_024a7a24;
          fVar22 = *(float *)(*(long *)(param_5 + 0x30) + 0x5c);
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x44);
          uVar10 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
          fVar12 = 1.0;
          if ((uVar10 & 1) == 0) {
            fVar12 = _UNK_00e208d8;
          }
          if (((*(long *)(param_5 + 0x30) == 0) || (lVar11 == 0)) ||
             (fVar19 = *(float *)(*(long *)(param_5 + 0x30) + 0x60), param_3 = fVar3,
             Dino_BusSand_View_GrainParticles__Puff_23b5a1c
                       (fVar22 * fVar12,fVar19 * _UNK_00e2094c,fVar3,fVar19 * _UNK_00e20aec,
                        _UNK_00e2043c,_UNK_00e20178,lVar11,uVar9 & 0xffffffff,uVar7,uVar1,0),
             lStack_90 == 0)) goto LAB_024a7a24;
          Dino_BusSand_View_VehicleView__Kick_23fd8a0(0x3e800000,_UNK_00e205f8,lStack_90,0);
        }
      }
    }
  }
  puVar6 = PTR_DAT_04cad568;
  if (*(long *)(param_5 + 0x200) == 0) goto LAB_024a7a24;
  System_Collections_Generic_Dictionary_byte__ValueTuple_int__float____Remove_33a07c8
            (*(long *)(param_5 + 0x200),param_6,*(undefined8 *)PTR_DAT_04cbc5c8);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar11 = *(long *)puVar6;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar6;
  }
  puVar5 = PTR_DAT_04cab238;
  if (**(long **)(lVar11 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar11 + 0xb8),0);
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(2);
  fVar22 = _UNK_00e208cc;
  uVar23 = *(undefined8 *)(param_5 + 0x208);
  iVar2 = *(int *)(*(long *)puVar4 + 0xe4);
  fVar12 = *(float *)(param_5 + 0x270);
  if (*(float *)(param_5 + 0x270) <= _UNK_00e208cc) {
    fVar12 = _UNK_00e208cc;
  }
  *(float *)(param_5 + 0x270) = fVar12;
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_5 + 0x218) == 0) goto LAB_024a7a24;
    uVar9 = System_Collections_Generic_Dictionary_byte__Vector2___TryGetValue_33ab218
                      (*(long *)(param_5 + 0x218),param_6,&uStack_a8,*(undefined8 *)PTR_DAT_04cbc5d0
                      );
    if ((uVar9 & 1) == 0) {
      uStack_b0 = 0;
      uStack_b8 = 0;
    }
    else {
      fVar22 = (float)(uStack_a8 >> 0x20);
      uStack_d8 = 0;
      uStack_e0 = 0;
      System_Nullable_Vector2____ctor_2bd0a48
                (uStack_a8 & 0xffffffff,uStack_a8 >> 0x20,&uStack_e0,*(undefined8 *)PTR_DAT_04cb4e90
                );
      uStack_b8 = uStack_e0;
      uStack_b0 = uStack_d8;
    }
    uVar9 = uStack_b8;
    uStack_a0 = uStack_b8;
    uStack_98 = uStack_b0;
    if (*(long *)(param_5 + 0x208) == 0) goto LAB_024a7a24;
    Dino_BusSand_View_PaintingLayer__Bloom_23d9dc8
              (*(long *)(param_5 + 0x208),param_6,uStack_b8,uStack_b0,0);
    puVar5 = PTR_DAT_04cb71d0;
    lVar11 = *(long *)(param_5 + 0x30);
    if ((uVar9 & 0xff) == 0) {
      if (lVar11 == 0) goto LAB_024a7a24;
      param_3 = 0.0;
      fVar22 = 0.5;
      uVar7 = Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(0x3f000000,0x3f000000,0,lVar11,0);
    }
    else {
      uVar7 = System_Nullable_Vector2___get_Value_2bd0a60
                        (&uStack_a0,*(undefined8 *)PTR_DAT_04cb71d0);
      System_Nullable_Vector2___get_Value_2bd0a60(&uStack_a0,*(undefined8 *)puVar5);
      if (lVar11 == 0) goto LAB_024a7a24;
      uVar7 = Dino_BusSand_View_StageLayout__GrainToWorld_23e8978(uVar7,lVar11,0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar6;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      uVar1 = *(undefined4 *)(param_5 + 0x214);
      Dino_BusSand_View_GameView__PanOf_23a7184(uVar7,fVar22,param_3,param_5);
      Dino_BusSand_GameAudio__PaintBloom_238459c(lVar11,uVar1,0);
    }
    *(int *)(param_5 + 0x214) = *(int *)(param_5 + 0x214) + 1;
  }
  if (*(long *)(param_5 + 0x218) != 0) {
    System_Collections_Generic_Dictionary_byte__Vector2___Remove_33aabf4
              (*(long *)(param_5 + 0x218),param_6,*(undefined8 *)PTR_DAT_04cbc5c0);
    lVar11 = *(long *)(param_5 + 0x58);
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),param_6,*(undefined8 *)(lVar11 + 0x28));
    }
    return;
  }
LAB_024a7a24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

