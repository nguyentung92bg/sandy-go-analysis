/* IL2CPP: Dino.BusSand.View.SkidMarks$$Create
Dino_BusSand_View_SkidMarks_o* Dino_BusSand_View_SkidMarks__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SkidMarks$$Create
   Dino_BusSand_View_SkidMarks_o* Dino_BusSand_View_SkidMarks__Create (UnityEngine_Transform_o*
   parent, const MethodInfo* method); */

long Dino_BusSand_View_SkidMarks__Create_23ee068(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if ((bRam0000000004f9caac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbdce8);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbdcf0);
    FUN_02132f7c(PTR_DAT_04cb7298);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    FUN_02132f7c(PTR_DAT_04cbdcf8);
    bRam0000000004f9caac = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
  if (plVar4 == (long *)0x0) {
LAB_024ee488:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_024ee490:
    uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,0);
  }
  puVar1 = PTR_DAT_04cb6de8;
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_02134474(plVar4 + 4,lVar5);
    lVar5 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_024ee490;
    puVar2 = PTR_DAT_04cbdcf8;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_02134474(plVar4 + 5,lVar5);
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar5,*(undefined8 *)puVar2,plVar4,0);
      if ((lVar5 != 0) &&
         (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), puVar2 = PTR_DAT_04cbdce8,
         puVar1 = PTR_DAT_04caa148, lVar6 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
        lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar5,*(undefined8 *)puVar2);
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        UnityEngine_Mesh___ctor_4389e48(lVar7,0);
        if ((lVar7 != 0) &&
           (UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cbdcf0,0),
           lVar6 != 0)) {
          plVar4 = (long *)(lVar6 + 0x50);
          *plVar4 = lVar7;
          thunk_FUN_02134474(plVar4,lVar7);
          puVar1 = PTR_DAT_04cb6dc0;
          if (*plVar4 != 0) {
            UnityEngine_Mesh__MarkDynamic_439609c(*plVar4,0);
            lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar5,*(undefined8 *)puVar1);
            puVar3 = PTR_DAT_04cb7298;
            puVar2 = PTR_DAT_04cab588;
            puVar1 = PTR_DAT_04cab208;
            if (lVar7 != 0) {
              UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar7,*plVar4,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
              lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
              UnityEngine_Material___ctor_437b5a8(lVar7,uVar8,0);
              *(long *)(lVar6 + 0x58) = lVar7;
              thunk_FUN_02134474((long *)(lVar6 + 0x58),lVar7);
              puVar3 = PTR_DAT_04cb72c0;
              puVar2 = PTR_DAT_04cb72a0;
              puVar1 = PTR_DAT_04cb6dc8;
              if (lVar7 != 0) {
                UnityEngine_Material__SetColor_43830b0
                          (_UNK_00e20174,_UNK_00e20a94,_UNK_00e20658,0x3f000000,lVar7,
                           *(undefined8 *)PTR_DAT_04cb68b8,0);
                UnityEngine_Material__SetFloat_4383048(0x40a00000,lVar7,*(undefined8 *)puVar2,0);
                UnityEngine_Material__SetFloat_4383048(0x41200000,lVar7,*(undefined8 *)puVar3,0);
                UnityEngine_Material__set_renderQueue_437c9d8(lVar7,0xbae,0);
                lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (lVar5,*(undefined8 *)puVar1);
                if (lVar5 != 0) {
                  UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar5,lVar7,0);
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar5,0,0);
                  if (cRam0000000004f9cb07 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cbdce0);
                    cRam0000000004f9cb07 = '\x01';
                  }
                  puVar1 = PTR_DAT_04cbdce0;
                  **(long **)(*(long *)PTR_DAT_04cbdce0 + 0xb8) = lVar6;
                  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar6);
                  return lVar6;
                }
              }
            }
          }
        }
      }
      goto LAB_024ee488;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

