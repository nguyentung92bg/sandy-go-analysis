/* IL2CPP: Dino.BusSand.View.GameView$$OnCompleted
void Dino_BusSand_View_GameView__OnCompleted (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnCompleted
   void Dino_BusSand_View_GameView__OnCompleted (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnCompleted_23a6888
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
                    /* catch() { ... } // from try @ 024a6878 with catch @ 024a6894 */
                    /* try { // try from 024a6898 to 025a689f has its CatchHandler @ 024a68a8 */
                    /* try { // try from 024a68a0 to 025a68ab has its CatchHandler @ 024a6374 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a6898 with catch @ 024a68a8
                        */
  if ((bRam0000000004f9c936 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c936 = 1;
  }
  lStack_88 = 0;
  if (*(long *)(param_5 + 0xe0) != 0) {
    uVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_5 + 0xe0),param_6,&lStack_88,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((lStack_88 != 0) &&
       (Dino_BusSand_View_VehicleView__SetFill_23fed2c(0x3f800000,lStack_88,1,0), lStack_88 != 0)) {
      fVar11 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_88,0);
      fVar22 = param_3;
      fVar20 = param_2;
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      if (*(long *)(param_5 + 0x30) != 0) {
        fVar12 = *(float *)(*(long *)(param_5 + 0x30) + 0x60);
        fVar19 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
        uVar21 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
        uVar7 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
        lVar9 = *(long *)(param_5 + 0x20);
        if ((uVar7 & 1) == 0) {
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x50) == 0)) goto LAB_024a6e78;
          uVar4 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                            (*(long *)(lVar9 + 0x50),param_6,*(undefined8 *)PTR_DAT_04cbc448);
          if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbbfb8);
          }
          uVar5 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar4,0);
          fVar20 = 255.0;
          fVar16 = (float)(uVar5 & 0xff) / 255.0;
          fStack_a8 = (float)(uVar5 >> 8 & 0xff) / 255.0;
          fVar22 = (float)(uVar5 >> 0x10 & 0xff) / 255.0;
          param_4 = (float)(uVar5 >> 0x18) / 255.0;
          fStack_a4 = fVar16;
        }
        else {
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x50) == 0)) goto LAB_024a6e78;
          uVar4 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                            (*(long *)(lVar9 + 0x50),param_6,*(undefined8 *)PTR_DAT_04cbc448);
          if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb70d8);
          }
          fStack_a4 = (float)Dino_BusSand_View_PackPalette__Main_2390528(uVar4);
          fVar16 = fVar22;
          fStack_a8 = fVar20;
        }
        if (lStack_88 != 0) {
          fVar13 = (float)Dino_BusSand_View_VehicleView__get_Velocity_23f3acc(lStack_88,0);
          fVar18 = *(float *)(param_5 + 0x44);
          fVar14 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
          if (fVar14 - *(float *)(param_5 + 0x1fc) <= _UNK_00e2032c) {
            iVar10 = 4;
            if (*(int *)(param_5 + 0x1f8) + 1 < 4) {
              iVar10 = *(int *)(param_5 + 0x1f8) + 1;
            }
          }
          else {
            iVar10 = 0;
          }
          *(float *)(param_5 + 0x1fc) = fVar14;
          *(int *)(param_5 + 0x1f8) = iVar10;
          uVar4 = FUN_023e4c88(fStack_a4,fStack_a8,fVar22,param_4,0);
          if ((*(long *)(param_5 + 0x20) != 0) &&
             (lVar9 = *(long *)(*(long *)(param_5 + 0x20) + 0x50), lVar9 != 0)) {
            uVar3 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                              (lVar9,param_6,*(undefined8 *)PTR_DAT_04cbc448);
            puVar2 = PTR_DAT_04cb2870;
            if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb2870);
            }
            uVar5 = Dino_BusSand_View_GameView__Vivid_23a906c(uVar4,uVar3);
            uVar4 = _UNK_00e1fea8;
            if (*(long *)(param_5 + 0xb8) != 0) {
              uVar7 = NEON_ushl(CONCAT44(uVar5,uVar5),_UNK_00e6a7d0,4);
              uVar15 = NEON_ucvtf(uVar7 & 0xff000000ff,4);
              fVar14 = (float)uVar15 / 255.0;
              fVar23 = (float)((ulong)uVar15 >> 0x20) / 255.0;
              param_2 = param_2 + (float)((ulong)uVar21 >> 0x20) * fVar12 * 0.4;
              uVar21 = CONCAT44(param_2,fVar11 + (float)uVar21 * fVar12 * 0.4);
              fVar11 = (float)(uVar5 & 0xff) / 255.0;
              uVar15 = NEON_fmov(0x3f800000,4);
              if (fVar18 <= 1.0) {
                fVar18 = 1.0;
              }
              fVar17 = (float)*(int *)(param_5 + 0x1f8) * _UNK_00e20658 + 1.0;
              param_3 = param_3 + fVar19 * fVar12 * _UNK_00e2098c;
              Dino_BusSand_View_Fx__Ring_2398a10
                        (uVar21,param_2,param_3,fVar11 + (1.0 - fVar11) * _UNK_00e2094c,
                         fVar14 + ((float)uVar15 - fVar14) * 0.45,
                         fVar23 + ((float)((ulong)uVar15 >> 0x20) - fVar23) * 0.45,_UNK_00e1fea8,
                         fVar17 + fVar17,*(long *)(param_5 + 0xb8));
              if (*(long *)(param_5 + 0xb8) != 0) {
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                Dino_BusSand_View_Fx__Stars_2392818
                          (uVar21,param_2,param_3,_UNK_00e20184,_UNK_00e20324,fVar13 * fVar18,
                           fVar20 * fVar18,fVar16 * fVar18,*(long *)(param_5 + 0xb8),
                           *(int *)(param_5 + 0x1f8) + 5,&uStack_a0);
                lVar9 = *(long *)(param_5 + 0xb0);
                uVar6 = FUN_023e4c88(fStack_a4,fStack_a8,fVar22,param_4,0);
                if (*(long *)(param_5 + 0x30) != 0) {
                  fVar20 = *(float *)(*(long *)(param_5 + 0x30) + 0x5c);
                  uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                  uVar7 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
                  fVar22 = 1.0;
                  if ((uVar7 & 1) == 0) {
                    fVar22 = _UNK_00e208d8;
                  }
                  if ((*(long *)(param_5 + 0x30) != 0) && (lVar9 != 0)) {
                    fVar11 = *(float *)(*(long *)(param_5 + 0x30) + 0x60);
                    Dino_BusSand_View_GrainParticles__Puff_23b5a1c
                              (fVar20 * fVar22,fVar11 * _UNK_00e207cc,_UNK_00e207cc,
                               fVar11 * _UNK_00e2065c,_UNK_00e20840,uVar4,lVar9,param_6,uVar6,uVar1,
                               0);
                    puVar2 = PTR_DAT_04cad568;
                    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b94e == '\0') {
                      FUN_02132f7c(PTR_DAT_04cad568);
                      cRam0000000004f9b94e = '\x01';
                    }
                    lVar9 = *(long *)puVar2;
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar9 = *(long *)puVar2;
                    }
                    lVar9 = **(long **)(lVar9 + 0xb8);
                    if (lVar9 != 0) {
                      if ((lStack_88 == 0) ||
                         (lVar8 = UnityEngine_Component__get_transform_43bcd18(lStack_88,0),
                         lVar8 == 0)) goto LAB_024a6e78;
                      UnityEngine_Transform__get_position_43d0e48(lVar8,0);
                      Dino_BusSand_View_GameView__PanOf_23a7184(param_5);
                      Dino_BusSand_GameAudio__BusComplete_2384188(lVar9,0);
                    }
                    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_Haptics__Play_2388ed8(2);
                    lVar9 = *(long *)(param_5 + 0x60);
                    fVar22 = *(float *)(param_5 + 0x270);
                    if (*(float *)(param_5 + 0x270) <= _UNK_00e205f8) {
                      fVar22 = _UNK_00e205f8;
                    }
                    *(float *)(param_5 + 0x270) = fVar22;
                    if (lVar9 == 0) {
                      return;
                    }
                    (**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),param_6,*(undefined8 *)(lVar9 + 0x28));
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
LAB_024a6e78:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

