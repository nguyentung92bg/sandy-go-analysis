/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Step
void Dino_BusSand_App_UI_HomeBus__Step (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, float now, bool idle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Step
   void Dino_BusSand_App_UI_HomeBus__Step (Dino_BusSand_App_UI_HomeBus_o* __this, float dt, float
   now, bool idle, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Step_22e230c
               (float param_1,undefined4 param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  if ((bRam0000000004f9c410 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c410 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  iVar8 = *(int *)(param_3 + 0x50);
  *(undefined4 *)(param_3 + 0x88) = param_2;
  *(undefined8 *)(param_3 + 0xf0) = 0;
  if (iVar8 == 3) {
    return;
  }
  fVar16 = *(float *)(param_3 + 0x40);
  fVar17 = *(float *)(param_3 + 0x44);
  if (iVar8 == 2) {
    fVar11 = *(float *)(param_3 + 0x58) + param_1;
    fVar12 = fVar11 * 2.5;
    *(float *)(param_3 + 0x58) = fVar11;
    fVar11 = 1.0;
    if (fVar12 <= 1.0) {
      fVar11 = fVar12;
    }
    fVar14 = 0.0;
    if (0.0 <= fVar12) {
      fVar14 = fVar11;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar14) {
      fVar11 = fVar14;
    }
    fVar12 = fVar17;
    if (fVar17 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar11 = (float)NEON_fminnm(fVar12 + (fVar11 * 55.0 + 55.0) * param_1,0x428c0000);
    fVar12 = fVar16 + fVar11 * param_1;
    *(float *)(param_3 + 0x40) = fVar12;
    *(float *)(param_3 + 0x44) = fVar11;
    if (*(float *)(param_3 + 0x4c) + 60.0 < fVar12) {
      *(undefined4 *)(param_3 + 0x50) = 3;
      if ((*(long *)(param_3 + 0x10) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x10),0),
         lVar4 != 0)) {
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(lVar4 + 0x10);
        if (lVar6 != 0) {
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar6,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
      }
      goto LAB_023e2be0;
    }
  }
  else if (iVar8 == 1) {
    fVar11 = *(float *)(param_3 + 0x58) + param_1;
    *(float *)(param_3 + 0x58) = fVar11;
    puVar2 = PTR_DAT_04cad568;
    if ((0.0 <= fVar11) && (*(char *)(param_3 + 0xfc) == '\0')) {
      *(undefined1 *)(param_3 + 0xfc) = 1;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = FUN_022c78f0(0);
      if (lVar4 != 0) {
        Dino_BusSand_GameAudio__Vroom_2385770(_UNK_00e2038c,lVar4,0);
      }
      lVar9 = *(long *)(param_3 + 0x20);
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,1);
      puVar2 = PTR_DAT_04cb7200;
      lVar6 = *(long *)PTR_DAT_04cb7200;
      if (*(float *)(param_3 + 0xa8) <= 0.0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
          lVar6 = *(long *)puVar2;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x90);
      }
      else {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
          lVar6 = *(long *)puVar2;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x54);
      }
      fVar11 = _UNK_00e1fdd0;
      uStack_e8 = puVar7[1];
      uStack_f0 = *puVar7;
      uStack_b0 = *(undefined4 *)(puVar7 + 2);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_b0);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = uStack_f0;
      uStack_b8 = uStack_e8;
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (*(float *)(param_3 + 0x5c) * _UNK_00e1fdd0 + _UNK_00e2043c,&uStack_d8,&uStack_f0,
                 *(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar4 == 0) goto LAB_023e2be0;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_023e2be4;
      *(undefined8 *)(lVar4 + 0x30) = uStack_c8;
      *(undefined8 *)(lVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_d8;
      if (lVar9 == 0) goto LAB_023e2be0;
      Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar9,lVar4,0);
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_023e2be0;
      Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                (0,_UNK_00e20754,*(float *)(param_3 + 0x5c) * fVar11,*(long *)(param_3 + 0x20),0);
      fVar11 = *(float *)(param_3 + 0x58);
    }
    fVar11 = fVar11 / *(float *)(param_3 + 0x5c);
    fVar12 = 1.0;
    if (fVar11 <= 1.0) {
      fVar12 = fVar11;
    }
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar12;
    }
    fVar11 = (float)func_0x049b5300(1.0 - fVar14,_UNK_00e20184);
    *(float *)(param_3 + 0x40) =
         *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x54) * (fVar11 + -1.0 + 1.0);
    puVar2 = PTR_DAT_04cad568;
    if ((*(char *)(param_3 + 0xcc) == '\0') && (_UNK_00e1fdd0 < fVar14)) {
      *(undefined1 *)(param_3 + 0xcc) = 1;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Tire_2384118(**(long **)(lVar4 + 0xb8),0);
      }
      uVar1 = _UNK_00e20994;
      fVar11 = _UNK_00e202dc;
      iVar8 = 4;
      do {
        Dino_BusSand_App_UI_HomeBus__DustAt_22e2be8(fVar11,uVar1,param_3);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      lVar9 = *(long *)(param_3 + 0x20);
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,3);
      puVar2 = PTR_DAT_04cb7200;
      lVar6 = *(long *)PTR_DAT_04cb7200;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
        lVar6 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04cb71f0;
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e8 = *(undefined8 *)(lVar6 + 0x84);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x7c);
      uStack_c8 = 0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar6 + 0x8c));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e207dc,&uStack_d8,&uStack_f0,*(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar4 == 0) goto LAB_023e2be0;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_023e2be4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar4 + 0x30) = uStack_c8;
      *(undefined8 *)(lVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_d8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      uStack_108 = *(undefined8 *)(lVar6 + 0x70);
      uStack_110 = *(undefined8 *)(lVar6 + 0x68);
      uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar6 + 0x78));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (0x3f000000,&uStack_f0,&uStack_110,*(undefined8 *)puVar3);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_023e2be4;
      *(undefined8 *)(lVar4 + 0x48) = uStack_e0;
      *(undefined8 *)(lVar4 + 0x40) = uStack_e8;
      *(undefined8 *)(lVar4 + 0x38) = uStack_f0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      uStack_98 = *(undefined8 *)(lVar6 + 0x5c);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x54);
      uStack_90 = *(undefined4 *)(lVar6 + 100);
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e200f8,&uStack_110,&uStack_a0,*(undefined8 *)puVar3);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_023e2be4;
      *(undefined8 *)(lVar4 + 0x60) = uStack_100;
      *(undefined8 *)(lVar4 + 0x58) = uStack_108;
      *(undefined8 *)(lVar4 + 0x50) = uStack_110;
      if (lVar9 == 0) goto LAB_023e2be0;
      Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar9,lVar4,0);
    }
    if (1.0 <= fVar14) {
      fVar11 = *(float *)(param_3 + 0x74) + _UNK_00e20874;
      *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x4c);
      puVar2 = PTR_DAT_04cad568;
      *(undefined4 *)(param_3 + 0x50) = 0;
      *(float *)(param_3 + 100) = *(float *)(param_3 + 100) + 46.0;
      lVar4 = *(long *)puVar2;
      *(float *)(param_3 + 0x74) = fVar11;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__BusCreak_2385868(0x3f800000,**(long **)(lVar4 + 0xb8),0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Haptics__Play_2388ed8(0,0);
      uVar10 = *(undefined8 *)(param_3 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_023e2be0;
        lVar6 = *(long *)(param_3 + 0x20);
        lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_3 + 0x38),0);
        if ((lVar4 == 0) || (UnityEngine_Transform__get_position_43d0e48(lVar4,0), lVar6 == 0))
        goto LAB_023e2be0;
        Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar6,0);
      }
      fVar12 = *(float *)(param_3 + 0x88) + 5.0;
      fVar11 = *(float *)(param_3 + 0xd4);
      if (*(float *)(param_3 + 0xd4) <= fVar12) {
        fVar11 = fVar12;
      }
      *(float *)(param_3 + 0xd0) = *(float *)(param_3 + 0x88);
      *(float *)(param_3 + 0xd4) = fVar11;
    }
  }
  else {
    fVar12 = *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x94);
    fVar14 = fVar17 + ((fVar12 - fVar16) * 95.0 + fVar17 * -16.0) * param_1;
    fVar15 = fVar16 + fVar14 * param_1;
    fVar11 = fVar12 + *(float *)(&UNK_00e69df8 + (ulong)(fVar15 - fVar12 < 0.0) * 4);
    if (ABS(fVar15 - fVar12) <= _UNK_00e2032c) {
      fVar11 = fVar15;
    }
    *(float *)(param_3 + 0x40) = fVar11;
    *(float *)(param_3 + 0x44) = fVar14;
    Dino_BusSand_App_UI_HomeBus__Creep_22e2f20(param_1,param_3,param_4 & 1);
  }
  if (0.0 < param_1) {
    fVar15 = *(float *)(param_3 + 0x48);
    fVar14 = (*(float *)(param_3 + 0x40) - fVar16) / param_1;
    *(float *)(param_3 + 0x44) = fVar14;
    fVar12 = (float)expf(param_1 * -30.0);
    fVar12 = 1.0 - fVar12;
    fVar11 = 1.0;
    if (fVar12 <= 1.0) {
      fVar11 = fVar12;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar12) {
      fVar13 = fVar11;
    }
    *(float *)(param_3 + 0x48) = fVar15 + fVar13 * ((fVar14 - fVar17) / param_1 - fVar15);
  }
  fVar17 = 0.0;
  if (*(int *)(param_3 + 0x50) == 0) {
    fVar11 = (ABS(*(float *)(param_3 + 0x44)) + _UNK_00e201f8) / _UNK_00e1feac;
    fVar17 = 1.0;
    if (fVar11 <= 1.0) {
      fVar17 = fVar11;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar17;
    }
    if (*(int *)(*(long *)PTR_DAT_04cb7200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar17 = 1.0 - fVar12 * fVar12 * (3.0 - (fVar12 + fVar12));
  }
  lVar4 = *(long *)(param_3 + 0x18);
  if (lVar4 != 0) {
    fVar11 = *(float *)(lVar4 + 0xe4) * _UNK_00e20a74;
    *(float *)(lVar4 + 0x110) = fVar17 * 26.0;
    fVar12 = *(float *)(param_3 + 0x40);
    fVar11 = (float)cosf(fVar11);
    Dino_BusSand_App_UI_HomeToonRig__Roll_22f59d0((fVar12 - fVar16) * fVar11,lVar4,0);
    Dino_BusSand_App_UI_HomeBus__Act_22e306c(param_3,param_4 & 1);
    Dino_BusSand_App_UI_HomeBus__Ride_22e3ba0(param_1,fVar17,param_3);
    Dino_BusSand_App_UI_HomeBus__Effects_22e40c0(param_1,param_3,0);
    if (*(long *)(param_3 + 0x20) != 0) {
      Dino_BusSand_App_UI_HomeToonFace__Step_22f2214
                (param_1,*(undefined4 *)(param_3 + 0x88),*(long *)(param_3 + 0x20),0);
      fVar11 = *(float *)(param_3 + 0x40);
      fVar17 = fVar16;
      if (fVar11 <= fVar16) {
        fVar17 = fVar11;
      }
      if (fVar16 <= fVar11) {
        fVar16 = fVar11;
      }
      fVar16 = fVar16 + _UNK_00e202dc;
      *(float *)(param_3 + 0xf0) = fVar17 + _UNK_00e205a8;
      *(float *)(param_3 + 0xf4) = fVar16;
      if (*(long *)(param_3 + 0x10) != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(fVar11,0,0,*(long *)(param_3 + 0x10),0);
        return;
      }
    }
  }
LAB_023e2be0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

