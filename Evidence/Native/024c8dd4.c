/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Art
UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__Art (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_GameObject_o* prefab, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, float worldScale, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Art
   UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__Art (Dino_BusSand_View_MechanicLayer_o*
   __this, UnityEngine_GameObject_o* prefab, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o
   rot, float worldScale, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo*
   method); */

long Dino_BusSand_View_MechanicLayer__Art_23c8dd4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9e2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_11,0,0);
  if ((uVar3 & 1) == 0) {
    param_11 = UnityEngine_Component__get_transform_43bcd18(param_9,0);
  }
  puVar2 = PTR_DAT_04cad390;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_Object__Instantiate_object__2805310(param_10,param_11,0,*(undefined8 *)puVar2)
  ;
  puVar2 = PTR_DAT_04cb7798;
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar4,param_12,0);
    lVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                      (lVar4,1,*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      uVar7 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          if (uVar7 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar8 = *(long *)(lVar5 + 0x20 + lVar9 * 8);
          if (lVar8 == 0) goto LAB_024c9064;
          UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
          UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,0,0);
          uVar7 = *(uint *)(lVar5 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar7);
      }
      lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__SetPositionAndRotation_43d2064
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar4,0);
        uVar6 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        fVar11 = 1.0;
        if ((uVar3 & 1) != 0) {
          lVar5 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
          if (lVar5 == 0) goto LAB_024c9064;
          fVar10 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(lVar5,0);
          fVar11 = _UNK_00e20a08;
          if (_UNK_00e20a08 <= fVar10) {
            fVar11 = fVar10;
          }
        }
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        param_8 = param_8 / fVar11;
        lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (param_8 * *(float *)(lVar5 + 0xc),param_8 * *(float *)(lVar5 + 0x10),
                   param_8 * *(float *)(lVar5 + 0x14),lVar4,0);
        return lVar4;
      }
    }
  }
LAB_024c9064:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

