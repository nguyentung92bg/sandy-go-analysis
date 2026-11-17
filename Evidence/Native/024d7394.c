/* IL2CPP: Dino.BusSand.View.PackVehicle$$Build
void Dino_BusSand_View_PackVehicle__Build (Dino_BusSand_View_PackVehicle_o* __this, int32_t kind, uint8_t color, bool roofOff, float fill, bool arrow, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$Build
   void Dino_BusSand_View_PackVehicle__Build (Dino_BusSand_View_PackVehicle_o* __this, int32_t kind,
   uint8_t color, bool roofOff, float fill, bool arrow, float scale, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__Build_23d7394
               (undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
               undefined4 param_5,uint param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar3 = PTR_DAT_04cb4db8;
  puVar2 = PTR_DAT_04caa070;
                    /* try { // try from 024d73d8 to 025d73db has its CatchHandler @ 024d73fc */
                    /* try { // try from 024d73dc to 025d73df has its CatchHandler @ 024d73f0 */
                    /* try { // try from 024d73e0 to 025d73e3 has its CatchHandler @ 024d73ec */
                    /* try { // try from 024d73e4 to 025d741f has its CatchHandler @ 024d669c */
  if ((bRam0000000004f9ca2c & 1) == 0) {
                    /* catch() { ... } // from try @ 024d69e4 with catch @ 024d73e8 */
                    /* catch() { ... } // from try @ 024d73e0 with catch @ 024d73ec */
                    /* catch() { ... } // from try @ 024d73dc with catch @ 024d73f0 */
    FUN_02132f7c(PTR_DAT_04cb7780);
                    /* catch() { ... } // from try @ 024d6a60 with catch @ 024d73f8 */
                    /* catch() { ... } // from try @ 024d73d8 with catch @ 024d73fc */
    FUN_02132f7c(PTR_DAT_04cb7790);
                    /* catch() { ... } // from try @ 024d6a28 with catch @ 024d7400 */
                    /* catch() { ... } // from try @ 024d6974 with catch @ 024d7404 */
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04caa070);
                    /* try { // try from 024d7420 to 025d7423 has its CatchHandler @ 024d743c */
    FUN_02132f7c(PTR_DAT_04caa0d8);
                    /* try { // try from 024d7424 to 025d743f has its CatchHandler @ 024d669c */
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 024d7420 with catch @ 024d743c */
                    /* try { // try from 024d7440 to 025d7447 has its CatchHandler @ 024d7498 */
    FUN_02132f7c(PTR_DAT_04cbd7b8);
                    /* try { // try from 024d7448 to 025d7467 has its CatchHandler @ 024d669c */
                    /* catch() { ... } // from try @ 024d6a44 with catch @ 024d744c */
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cbc440);
                    /* try { // try from 024d7468 to 025d746b has its CatchHandler @ 024d7484 */
    FUN_02132f7c(PTR_DAT_04cb4db8);
                    /* try { // try from 024d746c to 025d7487 has its CatchHandler @ 024d669c */
    FUN_02132f7c(PTR_DAT_04cbc978);
    bRam0000000004f9ca2c = 1;
  }
  uVar5 = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 024d7468 with catch @ 024d7484 */
  *(undefined4 *)(param_3 + 0x20) = param_4;
                    /* try { // try from 024d7488 to 025d748f has its CatchHandler @ 024d7498 */
  *(undefined4 *)(param_3 + 0x60) = param_2;
  lVar6 = thunk_FUN_0216e89c(uVar5);
                    /* try { // try from 024d7490 to 025d749b has its CatchHandler @ 024d669c */
                    /* catch() { ... } // from try @ 024d7440 with catch @ 024d7498
                       catch() { ... } // from try @ 024d7488 with catch @ 024d7498 */
  UnityEngine_GameObject___ctor_43c20cc(lVar6,*(undefined8 *)puVar3,0);
  if (lVar6 != 0) {
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
    plVar12 = (long *)(param_3 + 0x28);
    *plVar12 = lVar6;
    thunk_FUN_02134474(plVar12,lVar6);
    lVar6 = *plVar12;
    uVar5 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
    if (lVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar5,0,0);
      lVar6 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
      puVar3 = PTR_DAT_04cad390;
      puVar2 = PTR_DAT_04ca9ae8;
      if (lVar6 != 0) {
        uVar5 = Dino_BusSand_View_ArtPackData__Prefab_2390a44(lVar6,param_4,0);
        lVar6 = *plVar12;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        lVar6 = UnityEngine_Object__Instantiate_object__2805310(uVar5,lVar6,0,*(undefined8 *)puVar3)
        ;
        if ((lVar6 != 0) &&
           (lVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                              (lVar6,1,*(undefined8 *)PTR_DAT_04cb7790), lVar7 != 0)) {
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar14 = 0;
            uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar10 <= uVar14) goto LAB_024d78f4;
              uVar5 = *(undefined8 *)(lVar7 + 0x20 + uVar14 * 8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_Object__Destroy_43c8114(uVar5,0);
              uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          lVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                            (lVar6,1,*(undefined8 *)PTR_DAT_04cb7798);
          if (lVar7 != 0) {
            uVar9 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar9) {
              lVar15 = 0;
              do {
                if (uVar9 <= (uint)lVar15) {
LAB_024d78f4:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar13 = *(long *)(lVar7 + 0x20 + lVar15 * 8);
                if (lVar13 == 0) goto LAB_024d78f8;
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar13,0,0);
                UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar13,0,0);
                UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar13,0,0);
                UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar13,0,0);
                uVar9 = *(uint *)(lVar7 + 0x18);
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < (int)uVar9);
            }
            puVar4 = PTR_DAT_04cbc440;
            puVar3 = PTR_DAT_04cb7780;
            uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
            lVar6 = Dino_BusSand_Util__FindDeep_238d3bc(uVar5,*(undefined8 *)puVar4,0);
            if (lVar6 == 0) {
              uVar8 = 0;
              puVar1 = (undefined8 *)PTR_DAT_04cbc978;
            }
            else {
              uVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar6,*(undefined8 *)puVar3);
              puVar1 = (undefined8 *)PTR_DAT_04cbc978;
            }
            PTR_DAT_04cbc978 = (undefined *)puVar1;
            if (param_3 != 0) {
              *(undefined8 *)(param_3 + 0x30) = uVar8;
              thunk_FUN_02134474();
              lVar6 = Dino_BusSand_Util__FindDeep_238d3bc(uVar5,*puVar1,0);
              plVar12 = (long *)(param_3 + 0x40);
              *plVar12 = lVar6;
              thunk_FUN_02134474(plVar12,lVar6);
              lVar6 = *plVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              uVar8 = 0;
              if ((uVar14 & 1) != 0) {
                if (*plVar12 == 0) goto LAB_024d78f8;
                uVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                                  (*plVar12,*(undefined8 *)puVar3);
              }
              puVar3 = PTR_DAT_04cb6950;
              *(undefined8 *)(param_3 + 0x38) = uVar8;
              thunk_FUN_02134474();
              lVar6 = Dino_BusSand_Util__FindDeep_238d3bc(uVar5,*(undefined8 *)puVar3,0);
              plVar12 = (long *)(param_3 + 0x48);
              *plVar12 = lVar6;
              thunk_FUN_02134474(plVar12,lVar6);
              lVar6 = *plVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              if ((uVar14 & 1) != 0) {
                lVar6 = *(long *)(param_3 + 0x48);
                uVar8 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
                if (lVar6 == 0) goto LAB_024d78f8;
                UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar8,0,0);
                lVar6 = *plVar12;
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 024d77b8 to 025d789b has its CatchHandler @ 024d77b8
                       catch() { ... } // from try @ 024d77b8 with catch @ 024d77b8
                       catch() { ... } // from try @ 024d78b0 with catch @ 024d77b8
                       catch() { ... } // from try @ 024d7940 with catch @ 024d77b8
                       catch() { ... } // from try @ 024d7964 with catch @ 024d77b8 */
                  cRam0000000004f9b65d = '\x01';
                }
                if (lVar6 == 0) goto LAB_024d78f8;
                puVar11 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                UnityEngine_Transform__set_localPosition_43cfda8
                          (*puVar11,puVar11[1],puVar11[2],lVar6,0);
              }
              lVar6 = Dino_BusSand_Util__FindDeep_238d3bc(uVar5,*(undefined8 *)PTR_DAT_04cbd7b8,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              lVar7 = 0;
              if ((uVar14 & 1) != 0) {
                if (lVar6 == 0) goto LAB_024d78f8;
                lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
              }
              plVar12 = (long *)(param_3 + 0x50);
              *plVar12 = lVar7;
              thunk_FUN_02134474(plVar12);
              lVar6 = *plVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              if ((uVar14 & 1) != 0) {
                if (*plVar12 == 0) goto LAB_024d78f8;
                UnityEngine_GameObject__SetActive_43c1408(*plVar12,param_7 & 1,0);
              }
              uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
                    /* try { // try from 024d789c to 025d78a3 has its CatchHandler @ 024d7920 */
              UnityEngine_MaterialPropertyBlock___ctor_4372b28(uVar5,0);
                    /* try { // try from 024d78ac to 025d78af has its CatchHandler @ 024d791c */
                    /* try { // try from 024d78b0 to 025d793b has its CatchHandler @ 024d77b8 */
              *(undefined8 *)(param_3 + 0x58) = uVar5;
              thunk_FUN_02134474((undefined8 *)(param_3 + 0x58),uVar5);
              Dino_BusSand_View_PackVehicle__SetLook_23d78fc(param_1,param_3,param_5,param_6 & 1);
              if ((bRam0000000004f9ca31 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9ae8);
                bRam0000000004f9ca31 = 1;
              }
              if (*(long *)(param_3 + 0x28) != 0) {
                fVar16 = *(float *)(param_3 + 100);
                fVar18 = _UNK_00e2098c;
                if (fVar16 <= _UNK_00e2098c) {
                  fVar18 = fVar16;
                }
                fVar17 = _UNK_00e20864;
                if (_UNK_00e20864 <= fVar16) {
                  fVar17 = fVar18;
                }
                fVar18 = *(float *)(param_3 + 0x60) * *(float *)(param_3 + 0x74) * 0.0;
                UnityEngine_Transform__set_localScale_43d1be0
                          (fVar18 * (fVar17 * 0.5 + 1.0),fVar18 * (1.0 - fVar17),
                           fVar18 * (fVar17 * _UNK_00e207cc + 1.0),*(long *)(param_3 + 0x28),0);
                if (*(long *)(param_3 + 0x28) != 0) {
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (*(float *)(param_3 + 0x90) + 0.0,
                             *(float *)(param_3 + 0x6c) + *(float *)(param_3 + 0x94),
                             *(float *)(param_3 + 0x98) + 0.0,*(long *)(param_3 + 0x28),0);
                  puVar2 = PTR_DAT_04ca9ae8;
                  if (*(long *)(param_3 + 0x28) != 0) {
                    UnityEngine_Transform__set_localRotation_43d156c
                              (*(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x84),
                               *(undefined4 *)(param_3 + 0x88),*(undefined4 *)(param_3 + 0x8c),
                               *(long *)(param_3 + 0x28),0);
                    uVar5 = *(undefined8 *)(param_3 + 0x48);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
                    if ((uVar14 & 1) == 0) {
                      return;
                    }
                    lVar6 = *(long *)(param_3 + 0x48);
                    if (cRam0000000004f9b65e == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa208);
                      cRam0000000004f9b65e = '\x01';
                    }
                    if (lVar6 != 0) {
                      if ((bRam0000000004fa8b3e & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf7a00,0);
                        bRam0000000004fa8b3e = 1;
                      }
                      if (lVar6 != 0) {
                        lVar6 = *(long *)(lVar6 + 0x10);
                        if (lVar6 != 0) {
                          if (pcRam0000000004fa8bf0 == (code *)0x0) {
                            pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                          }
                          (*pcRam0000000004fa8bf0)(lVar6,&stack0xffffffffffffffd4);
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
LAB_024d78f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

