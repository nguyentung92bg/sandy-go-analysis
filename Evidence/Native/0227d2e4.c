/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyObstacleShadows
void Dino_BusSand_App_RenderSetup__ApplyObstacleShadows (UnityEngine_Renderer_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyObstacleShadows
   void Dino_BusSand_App_RenderSetup__ApplyObstacleShadows (UnityEngine_Renderer_o* r, const
   MethodInfo* method); */

void Dino_BusSand_App_RenderSetup__ApplyObstacleShadows_217d2e4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b90c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad3a0);
    FUN_02132f7c(PTR_DAT_04cad3a8);
    FUN_02132f7c(PTR_DAT_04cad3b0);
    bRam0000000004f9b90c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if (param_1 == (long *)0x0) {
LAB_0227d4a0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*param_1 != *(long *)PTR_DAT_04cad3a0) {
      UnityEngine_Renderer__set_receiveShadows_4373dcc(param_1,0,0);
      UnityEngine_Renderer__set_shadowCastingMode_4373c54(param_1,1,0);
      lVar5 = UnityEngine_Renderer__get_sharedMaterials_43743d0(param_1,0);
      puVar3 = PTR_DAT_04cad3b0;
      puVar2 = PTR_DAT_04cad3a8;
      if (lVar5 == 0) goto LAB_0227d4a0;
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar4 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar7 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
          if ((uVar6 & 1) == 0) {
            if (lVar7 == 0) goto LAB_0227d4a0;
            uVar6 = UnityEngine_Material__IsKeywordEnabled_437cfa8(lVar7,*(undefined8 *)puVar2,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_Material__DisableKeyword_437cda4(lVar7,*(undefined8 *)puVar2,0);
            }
            uVar6 = UnityEngine_Material__HasProperty_437c10c(lVar7,*(undefined8 *)puVar3,0);
            if (((uVar6 & 1) != 0) &&
               (fVar8 = (float)UnityEngine_Material__GetFloat_43839ec(lVar7,*(undefined8 *)puVar3,0)
               , fVar8 != 0.0)) {
              UnityEngine_Material__SetFloat_4383048(0,lVar7,*(undefined8 *)puVar3,0);
            }
          }
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
  }
  return;
}

