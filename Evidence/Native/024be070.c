/* IL2CPP: Dino.BusSand.View.MechFx$$Play
UnityEngine_GameObject_o* Dino_BusSand_View_MechFx__Play (Dino_BusSand_View_MechFx_o* __this, System_String_o* key, UnityEngine_Vector3_o pos, float size, UnityEngine_Transform_o* follow, float maxLife, System_Nullable_Quaternion__o rot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechFx$$Play
   UnityEngine_GameObject_o* Dino_BusSand_View_MechFx__Play (Dino_BusSand_View_MechFx_o* __this,
   System_String_o* key, UnityEngine_Vector3_o pos, float size, UnityEngine_Transform_o* follow,
   float maxLife, System_Nullable_Quaternion__o rot, const MethodInfo* method); */

long Dino_BusSand_View_MechFx__Play_23be070
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               undefined8 param_7,long param_8,char *param_9)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  puVar5 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab4a8);
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04cbcfa8);
    FUN_02132f7c(PTR_DAT_04cbcfb0);
    FUN_02132f7c(PTR_DAT_04cbcfb8);
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab480);
    FUN_02132f7c(PTR_DAT_04cab488);
    FUN_02132f7c(PTR_DAT_04cbcfc0);
    bRam0000000004f9c9b6 = 1;
  }
  lStack_88 = 0;
  uStack_f8 = 0;
  uVar7 = Dino_BusSand_View_MechFx__Prefab_23bdf88(param_6,param_7);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_6 + 0x30) == 0) goto LAB_024be680;
  uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_6 + 0x30),param_7,&lStack_88,*(undefined8 *)PTR_DAT_04cab470);
  if ((uVar8 & 1) == 0) {
LAB_024be200:
    uVar10 = UnityEngine_Component__get_transform_43bcd18(param_6,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    lVar9 = UnityEngine_Object__Instantiate_object__28052a0
                      (uVar7,uVar10,*(undefined8 *)PTR_DAT_04cab478);
    if ((lVar9 == 0) ||
       (lVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                           (lVar9,1,*(undefined8 *)PTR_DAT_04cab4a8), lVar11 == 0))
    goto LAB_024be680;
    uVar4 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar4) {
      uVar15 = 0;
      do {
        if (uVar4 <= uVar15) goto LAB_024be684;
        lVar12 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_024be680;
        uStack_f8 = UnityEngine_ParticleSystem__get_main_443295c(lVar12,0);
        UnityEngine_ParticleSystem_MainModule__set_scalingMode_4434134(&uStack_f8,0,0);
        UnityEngine_ParticleSystem_MainModule__set_playOnAwake_4432c9c(&uStack_f8,0,0);
        UnityEngine_ParticleSystem_MainModule__set_stopAction_4437c64(&uStack_f8,0,0);
        uVar8 = UnityEngine_ParticleSystem_MainModule__get_loop_4432ac0(&uStack_f8,0);
        if ((param_5 <= 0.0) && ((uVar8 & 1) != 0)) {
          UnityEngine_ParticleSystem_MainModule__set_loop_4432b60(&uStack_f8,0,0);
        }
        uVar4 = *(uint *)(lVar11 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar4);
    }
    lVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                       (lVar9,1,*(undefined8 *)PTR_DAT_04cb7798);
    if (lVar11 == 0) goto LAB_024be680;
    uVar4 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar4) {
      lVar12 = 0;
      do {
        if (uVar4 <= (uint)lVar12) goto LAB_024be684;
        lVar14 = *(long *)(lVar11 + 0x20 + lVar12 * 8);
        if (lVar14 == 0) goto LAB_024be680;
        UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar14,0,0);
        UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar14,0,0);
        uVar4 = *(uint *)(lVar11 + 0x18);
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < (int)uVar4);
    }
  }
  else {
    if (lStack_88 == 0) goto LAB_024be680;
    if (*(int *)(lStack_88 + 0x18) < 1) goto LAB_024be200;
    lVar9 = System_Collections_Generic_Stack_object___Pop_2eeda6c
                      (lStack_88,*(undefined8 *)PTR_DAT_04cab480);
    if (lVar9 == 0) goto LAB_024be680;
    UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
  }
  lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
  if (*param_9 == '\0') {
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    param_9 = *(char **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
    pcVar3 = param_9 + 4;
    pcVar2 = param_9 + 8;
    pcVar1 = param_9 + 0xc;
  }
  else {
    pcVar1 = param_9 + 0x10;
    pcVar2 = param_9 + 0xc;
    pcVar3 = param_9 + 8;
    param_9 = param_9 + 4;
  }
  if (lVar11 != 0) {
    UnityEngine_Transform__SetPositionAndRotation_43d2064
              (param_1,param_2,param_3,*(undefined4 *)param_9,*(undefined4 *)pcVar3,
               *(undefined4 *)pcVar2,*(undefined4 *)pcVar1,lVar11,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    puVar6 = PTR_DAT_04caa208;
    if (lVar11 != 0) {
      param_4 = *(float *)(param_6 + 0x20) * param_4;
      lVar12 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar20 = (ulong)(uint)(*(float *)(lVar12 + 0x14) * param_4);
      uVar8 = (ulong)(uint)(*(float *)(lVar12 + 0x10) * param_4);
      UnityEngine_Transform__set_localScale_43d1be0
                (param_4 * *(float *)(lVar12 + 0xc),uVar8,uVar20,lVar11,0);
      lVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar9,1,*(undefined8 *)PTR_DAT_04cab4a8);
      fVar19 = (float)uVar20;
      fVar18 = (float)uVar8;
      if (lVar11 != 0) {
        uVar4 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar4) {
          lVar12 = 0;
          do {
            if (uVar4 <= (uint)lVar12) {
LAB_024be684:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar14 = *(long *)(lVar11 + 0x20 + lVar12 * 8);
            if (lVar14 == 0) goto LAB_024be680;
            UnityEngine_ParticleSystem__Clear_44363d8(lVar14,1,0);
            UnityEngine_ParticleSystem__Play_4436148(lVar14,1,0);
            fVar19 = (float)uVar20;
            fVar18 = (float)uVar8;
            uVar4 = *(uint *)(lVar11 + 0x18);
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < (int)uVar4);
        }
        lVar11 = *(long *)(param_6 + 0x38);
        fVar21 = _UNK_00e20390;
        if (_UNK_00e20390 <= param_5) {
          fVar21 = param_5;
        }
        fVar16 = (float)UnityEngine_Time__get_time_43cd540(0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(param_8,0,0);
        if ((uVar8 & 1) == 0) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar13 = *(float **)(*(long *)puVar6 + 0xb8);
          param_1 = *pfVar13;
          param_2 = pfVar13[1];
          param_3 = pfVar13[2];
        }
        else {
          if (param_8 == 0) goto LAB_024be680;
          fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(param_8,0);
          param_1 = param_1 - fVar17;
          param_2 = param_2 - fVar18;
          param_3 = param_3 - fVar19;
        }
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        System_ValueTuple_object__object__float__object__Vector3____ctor_3129f7c
                  (fVar21 + fVar16,param_1,param_2,param_3,&uStack_130,lVar9,param_7,param_8,
                   *(undefined8 *)PTR_DAT_04cbcfc0);
        if (lVar11 != 0) {
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)PTR_DAT_04cbcfa8;
          uStack_e8 = uStack_128;
          uStack_f0 = uStack_130;
          uStack_d8 = uStack_118;
          uStack_e0 = uStack_120;
          uStack_c8 = uStack_108;
          uStack_d0 = uStack_110;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar4 = *(uint *)(lVar11 + 0x18);
            if (uVar4 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar4 * 0x30;
              *(uint *)(lVar11 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar12 + 0x28) = uStack_128;
              *(undefined8 *)(lVar12 + 0x20) = uStack_130;
              *(undefined8 *)(lVar12 + 0x38) = uStack_118;
              *(undefined8 *)(lVar12 + 0x30) = uStack_120;
              *(undefined8 *)(lVar12 + 0x48) = uStack_108;
              *(undefined8 *)(lVar12 + 0x40) = uStack_110;
              thunk_FUN_02134474(lVar12 + 0x20,0);
            }
            else {
              uStack_b8 = uStack_128;
              uStack_c0 = uStack_130;
              uStack_a8 = uStack_118;
              uStack_b0 = uStack_120;
              uStack_98 = uStack_108;
              uStack_a0 = uStack_110;
              System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3____AddWithResize_39df084
                        (lVar11,&uStack_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            return lVar9;
          }
        }
      }
    }
  }
LAB_024be680:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

