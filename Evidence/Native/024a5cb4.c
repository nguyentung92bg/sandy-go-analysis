/* IL2CPP: Dino.BusSand.View.GameView$$OnSuction
void Dino_BusSand_View_GameView__OnSuction (Dino_BusSand_View_GameView_o* __this, int32_t truckId, int32_t removed, Dino_BusSand_Core_GrainPoint_array* samples, float flight, bool magic, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnSuction
   void Dino_BusSand_View_GameView__OnSuction (Dino_BusSand_View_GameView_o* __this, int32_t
   truckId, int32_t removed, Dino_BusSand_Core_GrainPoint_array* samples, float flight, bool magic,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnSuction_23a5cb4
               (long param_1,undefined4 param_2,int param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f9c934 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbc5a0);
    FUN_02132f7c(PTR_DAT_04cbc5a8);
    FUN_02132f7c(PTR_DAT_04cbc5b0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cbc358);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cab2a0);
    FUN_02132f7c(PTR_DAT_04cbc580);
    bRam0000000004f9c934 = 1;
  }
  lStack_a8 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar12 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                       (*(long *)(param_1 + 0xe0),param_2,&lStack_a8,*(undefined8 *)PTR_DAT_04cbc4b8
                       );
    if ((param_4 == 0) || ((uVar12 & 1) == 0)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a6848 with catch @ 024a6850
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a6844 with catch @ 024a6854
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a64fc with catch @ 024a6858
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a6510 with catch @ 024a685c
                        */
                    /* try { // try from 024a6878 to 025a687b has its CatchHandler @ 024a6894 */
                    /* try { // try from 024a687c to 025a6897 has its CatchHandler @ 024a6374 */
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar13 != 0)) {
      uVar10 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                         (lVar13,param_2,*(undefined8 *)PTR_DAT_04cbc448);
      if (0 < param_3) {
        lVar13 = *(long *)(param_1 + 0x200);
        UnityEngine_Time__get_time_43cd540(0);
        uStack_b0 = 0;
        System_ValueTuple_int__float____ctor_30e238c
                  (&uStack_b0,param_2,*(undefined8 *)PTR_DAT_04cab2a0);
        if (lVar13 == 0) goto LAB_024a6880;
        System_Collections_Generic_Dictionary_byte__ValueTuple_int__float____set_Item_339f334
                  (lVar13,uVar10,uStack_b0,*(undefined8 *)PTR_DAT_04cbc5a8);
        uVar12 = *(ulong *)(param_4 + 0x18);
        if (uVar12 != 0) {
          if (0 < (int)uVar12) {
            uVar12 = uVar12 & 0xffffffff;
            do {
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (*(long *)(param_1 + 0x218) == 0) goto LAB_024a6880;
          System_Collections_Generic_Dictionary_byte__Vector2___set_Item_33a976c
                    (*(long *)(param_1 + 0x218),uVar10,*(undefined8 *)PTR_DAT_04cbc5a0);
        }
        if (((param_5 & 1) != 0) && (lVar13 = *(long *)(param_1 + 0xc0), lVar13 != 0)) {
          if ((lStack_a8 == 0) ||
             (lVar14 = UnityEngine_Component__get_transform_43bcd18(lStack_a8,0), lVar14 == 0))
          goto LAB_024a6880;
          UnityEngine_Transform__get_position_43d0e48(lVar14,0);
          if (cRam0000000004f9bcf8 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9bcf8 = '\x01';
          }
          if ((lStack_a8 == 0) ||
             (Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lStack_a8,0),
             lStack_a8 == 0)) goto LAB_024a6880;
          uVar15 = UnityEngine_Component__get_transform_43bcd18(lStack_a8,0);
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          Dino_BusSand_View_MechFx__Play_23be070
                    (lVar13,*(undefined8 *)PTR_DAT_04cbc580,uVar15,&uStack_c8,0);
        }
      }
      uVar12 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar10,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_View_PackPalette__Main_2390528(uVar10);
        uVar10 = FUN_023e4c88(0);
      }
      if (((param_5 & 1) == 0) && (uVar12 = *(ulong *)(param_4 + 0x18), uVar12 != 0)) {
        if (0 < (int)uVar12) {
          uVar12 = uVar12 & 0xffffffff;
          puVar17 = (undefined4 *)(param_4 + 0x20);
          iVar19 = 0x7fffffff;
          iVar18 = -0x80000000;
          do {
            iVar2 = (int)(short)*puVar17;
            iVar1 = iVar2;
            if (iVar19 <= iVar2) {
              iVar1 = iVar19;
            }
            if (iVar2 <= iVar18) {
              iVar2 = iVar18;
            }
            uVar12 = uVar12 - 1;
            puVar17 = puVar17 + 1;
            iVar19 = iVar1;
            iVar18 = iVar2;
          } while (uVar12 != 0);
        }
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_024a6880;
        Dino_BusSand_View_StageLayout__GrainToWorld_23e8978(*(long *)(param_1 + 0x30),0);
        puVar7 = PTR_DAT_04cb2870;
        if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x78) == 0)) goto LAB_024a6880;
        lVar13 = *(long *)PTR_DAT_04cb2870;
        iVar19 = *(int *)(lVar13 + 0xe4);
        *(float *)(*(long *)(param_1 + 0x78) + 100) =
             *(float *)(*(long *)(param_1 + 0x30) + 0x60) * _UNK_00e20658;
        if (iVar19 == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar7;
        }
        if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x39) != '\0') {
          if (lStack_a8 == 0) goto LAB_024a6880;
          lVar13 = *(long *)(param_1 + 0x78);
          uVar15 = UnityEngine_Component__get_transform_43bcd18(lStack_a8,0);
          if (((lStack_a8 == 0) ||
              (Dino_BusSand_View_VehicleView__get_IntakeLocal_23ff0ac(lStack_a8,0),
              *(long *)(param_1 + 0x30) == 0)) || (lVar13 == 0)) goto LAB_024a6880;
          uVar21 = NEON_ushl(CONCAT44(uVar10,uVar10),_UNK_00e6a460,4);
          uVar12 = CONCAT26((short)((ulong)uVar21 >> 0x20),
                            CONCAT24((short)uVar21,
                                     CONCAT22((short)((uint)uVar10 >> 8),(short)uVar10))) &
                   0xff00ff00ff00ff;
          auVar24._2_2_ = 0;
          auVar24._0_2_ = (ushort)uVar12;
          auVar24._4_2_ = (short)(uVar12 >> 0x10);
          auVar24._6_2_ = 0;
          auVar24._8_2_ = (short)(uVar12 >> 0x20);
          auVar24._10_2_ = 0;
          auVar24._12_2_ = (short)(uVar12 >> 0x30);
          auVar24._14_2_ = 0;
          NEON_ucvtf(auVar24,4);
          NEON_fmov(0x3f800000,4);
          Dino_BusSand_View_SuctionBeams__Feed_23ecc10(lVar13,param_2,uVar15,0);
        }
      }
      if (lStack_a8 != 0) {
        lVar13 = *(long *)(param_1 + 0xb0);
        uVar15 = UnityEngine_Component__get_transform_43bcd18(lStack_a8,0);
        if (lStack_a8 != 0) {
          Dino_BusSand_View_VehicleView__get_IntakeLocal_23ff0ac(lStack_a8,0);
          lVar14 = *(long *)(param_1 + 0x1f0);
          if (lVar14 == 0) {
            lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
            System_Action_int____ctor_35ef18c(lVar14,param_1,*(undefined8 *)PTR_DAT_04cbc5b0,0);
            *(long *)(param_1 + 0x1f0) = lVar14;
            thunk_FUN_02134474(param_1 + 0x1f0,lVar14);
          }
          if ((lVar13 != 0) &&
             (Dino_BusSand_View_GrainParticles__SetTarget_23b4d00(lVar13,param_2,uVar15,lVar14,0),
             *(long *)(param_1 + 0x30) != 0)) {
            Dino_BusSand_View_ArtPack__get_Active_238dea0();
            if ((*(long *)(param_1 + 0x38) != 0) &&
               (lVar13 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0),
               lVar13 != 0)) {
              UnityEngine_Transform__get_up_43d16f4(lVar13,0);
              if ((*(long *)(param_1 + 0x38) != 0) &&
                 (lVar13 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0)
                 , lVar13 != 0)) {
                UnityEngine_Transform__get_right_43d15f4(lVar13,0);
                puVar9 = PTR_DAT_04cbc358;
                puVar8 = PTR_DAT_04cb2870;
                puVar7 = PTR_DAT_04caa208;
                uVar6 = _UNK_00e6b978;
                uVar5 = _UNK_00e6b970;
                uVar21 = _UNK_00e6a468;
                uVar15 = _UNK_00e69a20;
                fVar4 = _UNK_00e20094;
                if ((int)*(ulong *)(param_4 + 0x18) < 1) {
                  return;
                }
                uVar12 = 0;
                uVar16 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
                    /* try { // try from 024a6374 to 025a64fb has its CatchHandler @ 024a6374
                       catch() { ... } // from try @ 024a6374 with catch @ 024a6374
                       catch() { ... } // from try @ 024a6528 with catch @ 024a6374
                       catch() { ... } // from try @ 024a684c with catch @ 024a6374
                       catch() { ... } // from try @ 024a687c with catch @ 024a6374
                       catch() { ... } // from try @ 024a68a0 with catch @ 024a6374 */
                while( true ) {
                  if (uVar16 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if ((*(long *)(param_1 + 0x30) == 0) ||
                     (Dino_BusSand_View_StageLayout__GrainToWorld_23e8978
                                (*(long *)(param_1 + 0x30),0), *(long *)(param_1 + 0x30) == 0))
                  break;
                  iVar19 = 0;
                  do {
                    UnityEngine_Random__Range_43b64a8(0);
                    UnityEngine_Random__Range_43b64a8(0);
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* try { // try from 024a64fc to 025a6503 has its CatchHandler @ 024a6858 */
                    uVar11 = Dino_BusSand_View_GrainParticles__Jitter_23b5928(uVar10,0);
                    uVar16 = CONCAT44(0,uVar11);
                    if ((iVar19 != 0) && ((param_5 & 1) != 0)) break;
                    /* try { // try from 024a6510 to 025a6527 has its CatchHandler @ 024a685c */
                    /* try { // try from 024a6528 to 025a6843 has its CatchHandler @ 024a6374 */
                    if ((0.0 < *(float *)(param_1 + 0x70)) &&
                       (fVar20 = (float)UnityEngine_Random__get_value_43b6570(0), fVar20 < 0.25)) {
                      auVar3._8_8_ = uVar6;
                      auVar3._0_8_ = uVar5;
                      auVar23._8_4_ = uVar11;
                      auVar23._0_8_ = uVar16;
                      auVar23._12_4_ = 0;
                      auVar24 = NEON_ushl(auVar23,auVar3,8);
                      uVar16 = CONCAT44(auVar24._8_4_,auVar24._0_4_) & 0xff000000ff;
                      uVar22 = NEON_ucvtf(uVar16,4);
                      uVar25 = NEON_scvtf(CONCAT44((int)((ulong)uVar21 >> 0x20) -
                                                   (int)(uVar16 >> 0x20),(int)uVar21 - (int)uVar16),
                                          4);
                      uVar16 = NEON_ushl(CONCAT44((int)((float)((ulong)uVar25 >> 0x20) * 0.6 +
                                                       (float)((ulong)uVar22 >> 0x20)),
                                                  (int)((float)uVar25 * 0.6 + (float)uVar22)),uVar15
                                         ,4);
                      uVar16 = (ulong)((uint)(uVar16 & 0xff0000ff0000) |
                                       (int)((float)(uVar11 >> 0x18 ^ 0xff) * fVar4 +
                                            (float)(uVar11 >> 0x18)) << 0x18 |
                                       (int)((float)((uVar11 ^ 0xffffffff) & 0xff) * fVar4 +
                                            (float)(uVar11 & 0xff)) & 0xffU |
                                      (uint)((uVar16 & 0xff0000ff0000) >> 0x20));
                    }
                    if ((param_5 & 1) == 0) {
                      if ((iVar19 == 0) &&
                         (UnityEngine_Random__get_value_43b6570(0),
                         *(int *)(*(long *)puVar8 + 0xe4) == 0)) {
                        thunk_FUN_0218fdac();
                      }
                      if ((*(long *)(param_1 + 0x30) == 0) ||
                         (UnityEngine_Random__Range_43b64a8(0), *(long *)(param_1 + 0x30) == 0))
                      goto LAB_024a6880;
                      UnityEngine_Random__Range_43b64a8(0);
                    }
                    else {
                      if (cRam0000000004f9bcf8 == '\0') {
                        FUN_02132f7c(puVar7);
                        cRam0000000004f9bcf8 = '\x01';
                      }
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_024a6880;
                      UnityEngine_Random__Range_43b64a8(0);
                      UnityEngine_Random__get_insideUnitSphere_43b6598(0);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_024a6880;
                    }
                    lVar13 = *(long *)(param_1 + 0xb0);
                    Dino_BusSand_View_ArtPack__get_Active_238dea0();
                    UnityEngine_Random__Range_43b64a8(0);
                    UnityEngine_Random__Range_43b64a8(0);
                    if ((param_5 & 1) != 0) {
                      UnityEngine_Random__Range_43b64a8(ZEXT816(0),0);
                    }
                    if (lVar13 == 0) goto LAB_024a6880;
                    Dino_BusSand_View_GrainParticles__EmitHoming_23b52a4(lVar13,param_2,uVar16,0);
                    iVar19 = iVar19 + 1;
                  } while (iVar19 != 4);
                  uVar12 = uVar12 + 1;
                    /* try { // try from 024a6844 to 025a6847 has its CatchHandler @ 024a6854 */
                  uVar16 = (ulong)*(uint *)(param_4 + 0x18);
                    /* try { // try from 024a6848 to 025a684b has its CatchHandler @ 024a6850 */
                    /* try { // try from 024a684c to 025a6877 has its CatchHandler @ 024a6374 */
                  if ((long)(int)*(uint *)(param_4 + 0x18) <= (long)uVar12) {
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
LAB_024a6880:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

