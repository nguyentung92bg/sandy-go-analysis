/* IL2CPP: Dino.BusSand.View.WorldView$$Tree
void Dino_BusSand_View_WorldView__Tree (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Vector3_o p, float s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$Tree
   void Dino_BusSand_View_WorldView__Tree (Dino_BusSand_View_WorldView_o* __this,
   UnityEngine_Vector3_o p, float s, const MethodInfo* method); */

void Dino_BusSand_View_WorldView__Tree_24061ac
               (undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined8 param_5
               )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  fVar15 = param_4;
  if ((bRam0000000004f9cb17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbe288);
    FUN_02132f7c(PTR_DAT_04cbe290);
    FUN_02132f7c(PTR_DAT_04cbe298);
    FUN_02132f7c(PTR_DAT_04cbe2a0);
    bRam0000000004f9cb17 = 1;
  }
  puVar3 = PTR_DAT_04cbe290;
  puVar1 = PTR_DAT_04ca9ae8;
  fVar11 = (float)param_1;
  fVar12 = (float)fmodf(fVar11 * 37.0,0x43b40000);
  uVar14 = 0;
  fVar12 = fVar12 * _UNK_00e20a74;
  fVar16 = fVar12;
  uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar12,0,0);
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  puVar2 = PTR_DAT_04caa208;
  uVar4 = Dino_BusSand_View_WorldView__Model_24054f0
                    (param_1,param_2,param_3,uVar13,fVar16,uVar14,fVar15,param_5,
                     *(undefined8 *)puVar3,0);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  puVar3 = PTR_DAT_04cbe288;
  if ((uVar5 & 1) == 0) {
    uVar17 = 0;
    uVar14 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar12,0,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    uVar4 = Dino_BusSand_View_WorldView__Model_24054f0
                      (param_1,param_2,param_3,uVar14,fVar12,uVar17,uVar13,param_5,
                       *(undefined8 *)puVar3,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      fVar16 = *(float *)(lVar9 + 0x20) * param_4 * _UNK_00e20590;
      fVar12 = param_4 * _UNK_00e201f0;
      fVar18 = param_4 * _UNK_00e20994;
      fVar15 = (float)param_2 + (float)((ulong)uVar4 >> 0x20) * param_4 * 0.35;
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cbe2a0;
      uVar6 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                        (_UNK_00e208e8,_UNK_00e20104,_UNK_00e204e8,0x3f800000,_UNK_00e20390,0,
                         *(undefined8 *)PTR_DAT_04cbe2a0,0);
      Dino_BusSand_View_WorldView__Box_2405ee4
                (CONCAT44(fVar15,fVar11 + (float)uVar4 * param_4 * 0.35),fVar15,param_3 + fVar16,
                 fVar12,fVar18,fVar12,param_5,*(undefined8 *)puVar1,uVar6,0);
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
      uVar4 = *(undefined8 *)PTR_DAT_04cb6de0;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar4,0);
      if (plVar7 == (long *)0x0) {
LAB_02506854:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_0250685c:
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar9;
        thunk_FUN_02134474(plVar7 + 4,lVar9);
        lVar9 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0250685c;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar9;
          thunk_FUN_02134474(plVar7 + 5,lVar9);
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
          puVar1 = PTR_DAT_04cbe298;
          UnityEngine_GameObject___ctor_43c2310(lVar9,*(undefined8 *)PTR_DAT_04cbe298,plVar7,0);
          if (lVar9 != 0) {
            lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar9,*(undefined8 *)PTR_DAT_04cb6dc0);
            uVar4 = Dino_BusSand_View_StaticMerge__get_Sphere_23ec4cc(0);
            if (lVar8 != 0) {
              UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar8,uVar4,0);
              lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
              uVar4 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
              if (lVar8 != 0) {
                UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar4,0,0);
                lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                if (cRam0000000004f9bcf8 == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9bcf8 = '\x01';
                }
                if (lVar8 != 0) {
                  lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
                  uVar4 = *(undefined8 *)(lVar10 + 0x18);
                  fVar15 = (float)param_2 + (float)((ulong)uVar4 >> 0x20) * param_4 * 0.95;
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (CONCAT44(fVar15,fVar11 + (float)uVar4 * param_4 * 0.95),fVar15,
                             param_3 + *(float *)(lVar10 + 0x20) * param_4 * _UNK_00e2038c,lVar8,0);
                  lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                  if (lVar8 != 0) {
                    UnityEngine_Transform__set_localScale_43d1be0
                              (param_4,param_4 * _UNK_00e20830,lVar8,0);
                    lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                      (lVar9,*(undefined8 *)PTR_DAT_04cb6dc8);
                    uVar4 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                      (_UNK_00e203f4,_UNK_00e20374,_UNK_00e206e4,0x3f800000,
                                       0x3e800000,0,*(undefined8 *)puVar1,0);
                    if (lVar9 != 0) {
                      UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar9,uVar4,0);
                      if ((bRam0000000004fa68c6 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf67a0,0,0);
                        bRam0000000004fa68c6 = 1;
                      }
                      if (lVar9 != 0) {
                        lVar8 = *(long *)(lVar9 + 0x10);
                        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar9,0);
                        }
                        if (pcRam0000000004fa6940 == (code *)0x0) {
                          pcRam0000000004fa6940 = (code *)FUN_02132f40(&UNK_00e23a38);
                        }
                    /* WARNING: Could not recover jumptable at 0x04473ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004fa6940)(lVar8,0);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                }
              }
            }
          }
          goto LAB_02506854;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
  return;
}

