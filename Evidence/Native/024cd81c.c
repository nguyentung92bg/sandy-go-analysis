/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFireTruckSaved
void Dino_BusSand_View_MechanicLayer__OnFireTruckSaved (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFireTruckSaved
   void Dino_BusSand_View_MechanicLayer__OnFireTruckSaved (Dino_BusSand_View_MechanicLayer_o*
   __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnFireTruckSaved_23cd81c
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd4f0);
    FUN_02132f7c(PTR_DAT_04cbd4f8);
    bRam0000000004f9c9f6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
    Dino_BusSand_GameAudio__SirenLoop_2384d8c(0,**(long **)(lVar3 + 0xb8),0,0);
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
    param_2 = 0;
    Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar3 + 0xb8),8,0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_4 + 0x30);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),param_5,*(undefined8 *)(lVar3 + 0x28));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
      if (lVar3 == 0) goto LAB_024cdc7c;
      uVar10 = UnityEngine_Transform__get_position_43d0e48(lVar3,0);
    }
    else {
      if (lVar3 == 0) goto LAB_024cdc7c;
      uVar10 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar3,0);
    }
    if (*(long *)(param_4 + 0x38) != 0) {
      Dino_BusSand_View_Fx__Glow_2398b34
                (uVar10,param_2,param_3,0x3f800000,_UNK_00e208e0,_UNK_00e1fde8,0x3f400000,0x3fc00000
                 ,*(long *)(param_4 + 0x38),0);
      puVar1 = PTR_DAT_04cac5d0;
      lVar3 = *(long *)(param_4 + 0x38);
      if (lVar3 != 0) {
        lVar5 = *(long *)PTR_DAT_04cac5d0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(lVar5 + 0xb8);
        Dino_BusSand_View_Fx__GroundRing_2398c44
                  (uVar10,param_2,param_3,*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc),
                   *(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                   *(float *)(param_4 + 0x50) * _UNK_00e20414,lVar3,0);
        if (*(long *)(param_4 + 0x38) != 0) {
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          Dino_BusSand_View_Fx__Stars_2392818
                    (uVar10,param_2,param_3,_UNK_00e2053c,_UNK_00e208e8,0,0,0,
                     *(long *)(param_4 + 0x38),10,&uStack_68,0);
          lVar3 = *(long *)(param_4 + 0x38);
          if (lVar3 != 0) {
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9bcf8 = '\x01';
            }
            puVar2 = PTR_DAT_04caa208;
            fVar8 = *(float *)(param_4 + 0x50);
            lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
            Dino_BusSand_View_Fx__Confetti_2399120
                      ((float)uVar10 + *(float *)(lVar5 + 0x18) * fVar8,
                       (float)param_2 + *(float *)(lVar5 + 0x1c) * fVar8,
                       param_3 + *(float *)(lVar5 + 0x20) * fVar8,0x41000000,lVar3,0x28,0);
            lVar3 = *(long *)(param_4 + 0x38);
            if (lVar3 != 0) {
              if (cRam0000000004f9bcf8 == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9bcf8 = '\x01';
              }
              lVar5 = *(long *)puVar1;
              fVar8 = *(float *)(param_4 + 0x50);
              fVar12 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
              uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar1;
              }
              lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
              if (lVar7 == 0) {
                uVar6 = *(undefined8 *)PTR_DAT_04cbd4f8;
              }
              else {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                  if (lVar7 == 0) goto LAB_024cdc7c;
                }
                uVar6 = (**(code **)(lVar7 + 0x18))
                                  (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)PTR_DAT_04cbd4f0,
                                   *(undefined8 *)(lVar7 + 0x28));
              }
              fVar9 = (float)uVar13 * fVar8;
              fVar11 = (float)((ulong)uVar13 >> 0x20) * fVar8;
              fVar12 = fVar12 * fVar8;
              fVar8 = (float)param_2 + fVar11 + fVar11;
              Dino_BusSand_View_Fx__Text_23993a8
                        (CONCAT44(fVar8,(float)uVar10 + fVar9 + fVar9),fVar8,
                         param_3 + fVar12 + fVar12,0x3f800000,_UNK_00e20180,0x3e800000,0x3f800000,
                         _UNK_00e20838,lVar3,uVar6,0);
            }
          }
        }
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(3,0);
    return;
  }
LAB_024cdc7c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

