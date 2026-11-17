/* IL2CPP: Dino.BusSand.View.GameView$$OnRevealed
void Dino_BusSand_View_GameView__OnRevealed (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnRevealed
   void Dino_BusSand_View_GameView__OnRevealed (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnRevealed_23a7b3c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f9c939 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cac878);
    bRam0000000004f9c939 = 1;
  }
  lStack_68 = 0;
  if (*(long *)(param_4 + 0xe0) != 0) {
    uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_4 + 0xe0),param_5,&lStack_68,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((((*(long *)(param_4 + 0x20) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_4 + 0x20) + 0x50), lVar5 != 0)) &&
        (uVar2 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                           (lVar5,param_5,*(undefined8 *)PTR_DAT_04cbc448), lStack_68 != 0)) &&
       (Dino_BusSand_View_VehicleView__SetColor_23fb3dc(lStack_68,uVar2,0,0), lStack_68 != 0)) {
      Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e207cc,_UNK_00e20328,lStack_68,0);
      if (*(long *)(param_4 + 0xb8) != 0) {
        fVar7 = *(float *)(*(long *)(param_4 + 0xb8) + 0x58);
        fVar10 = 1.0;
        fVar8 = _UNK_00e20948;
        if (_UNK_00e20948 < fVar7) {
          if (*(long *)(param_4 + 0x30) == 0) goto LAB_024a7f3c;
          fVar8 = *(float *)(*(long *)(param_4 + 0x30) + 0xfc);
          fVar10 = fVar8 / fVar7;
        }
        if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_View_GameView__FireColor_23a91ac(uVar2);
        if (lStack_68 != 0) {
          lVar5 = *(long *)(param_4 + 0xb8);
          Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_68,0);
          if ((lVar5 != 0) && (Dino_BusSand_View_Fx__Glow_2398b34(lVar5), lStack_68 != 0)) {
            lVar5 = *(long *)(param_4 + 0xb8);
            Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_68,0);
            if ((*(long *)(param_4 + 0x30) != 0) && (lVar5 != 0)) {
              fVar11 = (float)(uVar3 & 0xff) / 255.0;
              fVar12 = (float)(uVar3 >> 8 & 0xff) / 255.0;
              uVar4 = NEON_ushl(CONCAT44(uVar3,uVar3),_UNK_00e6a460,4);
              uVar9 = NEON_ucvtf(uVar4 & 0xffff00ffffff00ff,4);
              fVar13 = (float)uVar9 / 255.0;
              fVar7 = (float)((ulong)uVar9 >> 0x20) / 255.0;
              uVar9 = NEON_fmov(0x3f800000,4);
              Dino_BusSand_View_Fx__GroundRing_2398c44(lVar5);
              if (lStack_68 != 0) {
                lVar5 = *(long *)(param_4 + 0xb8);
                uVar2 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_68,0);
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                fVar7 = fVar7 + ((float)((ulong)uVar9 >> 0x20) - fVar7) * 0.1;
                System_Nullable_Color____ctor_2bc9090
                          (fVar11 + (1.0 - fVar11) * _UNK_00e20754,
                           fVar12 + (1.0 - fVar12) * _UNK_00e20754,
                           CONCAT44(fVar7,fVar13 + ((float)uVar9 - fVar13) * 0.1),fVar7,&uStack_80,
                           *(undefined8 *)PTR_DAT_04cac878);
                if (lVar5 != 0) {
                  uStack_90 = uStack_70;
                  uStack_98 = uStack_78;
                  uStack_a0 = uStack_80;
                  Dino_BusSand_View_Fx__StarsFlat_2398d44
                            (uVar2,fVar8,param_3,fVar10 * _UNK_00e20184,fVar10 * _UNK_00e2038c,lVar5
                             ,5,&uStack_a0);
                  puVar1 = PTR_DAT_04cad568;
                  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b94e == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad568);
                    cRam0000000004f9b94e = '\x01';
                  }
                  lVar5 = *(long *)puVar1;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar5 = *(long *)puVar1;
                  }
                  lVar5 = **(long **)(lVar5 + 0xb8);
                  if (lVar5 != 0) {
                    if ((lStack_68 == 0) ||
                       (lVar6 = UnityEngine_Component__get_transform_43bcd18(lStack_68,0),
                       lVar6 == 0)) goto LAB_024a7f3c;
                    UnityEngine_Transform__get_position_43d0e48(lVar6,0);
                    uVar2 = Dino_BusSand_View_GameView__PanOf_23a7184(param_4);
                    Dino_BusSand_GameAudio__Mechanic_2384944(0,uVar2,lVar5,10,0);
                  }
                  if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_Haptics__Play_2388ed8(1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024a7f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

