/* IL2CPP: Dino.BusSand.View.SandBoardView$$BindPackPalette
void Dino_BusSand_View_SandBoardView__BindPackPalette (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$BindPackPalette
   void Dino_BusSand_View_SandBoardView__BindPackPalette (Dino_BusSand_View_SandBoardView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__BindPackPalette_23e5b88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cbc968);
    FUN_02132f7c(PTR_DAT_04cbc978);
    FUN_02132f7c(PTR_DAT_04cbd818);
    FUN_02132f7c(PTR_DAT_04cbdab0);
    bRam0000000004f9ca7e = 1;
  }
  plVar7 = (long *)(param_1 + 0x58);
  lVar10 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar5 & 1) != 0) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
    UnityEngine_Texture2D___ctor_439df00(lVar10,0x80,2,4,0,0,0);
    if (lVar10 == 0) goto LAB_024e5f64;
    UnityEngine_Texture__set_filterMode_4398f60(lVar10,0,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar10,1,0);
    UnityEngine_Object__set_name_43c72ec(lVar10,*(undefined8 *)PTR_DAT_04cbdab0,0);
    *plVar7 = lVar10;
    thunk_FUN_02134474(plVar7,lVar10);
  }
  puVar3 = PTR_DAT_04cbd818;
  puVar2 = PTR_DAT_04cb70d8;
  lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x100);
  uVar5 = 0;
  do {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_View_PackPalette__Main_2390528(uVar5 & 0xffffffff,0);
    uVar4 = FUN_023e4c88(0);
    if (lVar10 == 0) goto LAB_024e5f64;
    if (*(uint *)(lVar10 + 0x18) <= uVar5) {
LAB_024e5f60:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar9 = lVar10 + uVar5 * 4;
    *(undefined4 *)(lVar9 + 0x20) = uVar4;
    Dino_BusSand_View_PackPalette__Shadow_2390624(uVar5 & 0xffffffff,0);
    uVar4 = FUN_023e4c88(0);
    if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar5 + 0x80) goto LAB_024e5f60;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(lVar9 + 0x220) = uVar4;
  } while (uVar5 != 0x41);
  if (*plVar7 != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8(*plVar7,lVar10,0);
    if (*plVar7 != 0) {
      UnityEngine_Texture2D__Apply_439ea78(*plVar7,0,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_Material__SetTexture_43831cc
                  (*(long *)(param_1 + 0x38),*(undefined8 *)puVar3,*plVar7,0);
        lVar10 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
        if (lVar10 != 0) {
          uVar8 = *(undefined8 *)(lVar10 + 0xa0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          lVar10 = 0;
          if ((uVar5 & 1) != 0) {
            lVar10 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0xa0) == 0)) goto LAB_024e5f64;
            uVar8 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(lVar10 + 0xa0),0);
            lVar10 = Dino_BusSand_Util__FindDeep_238d3bc(uVar8,*(undefined8 *)PTR_DAT_04cbc978,0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          lVar9 = 0;
          if ((uVar5 & 1) != 0) {
            if (lVar10 == 0) goto LAB_024e5f64;
            lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                              (lVar10,*(undefined8 *)PTR_DAT_04cb7780);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          if (lVar9 != 0) {
            uVar8 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar9,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lVar10 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar9,0);
            puVar1 = PTR_DAT_04cb72b0;
            if (lVar10 != 0) {
              uVar5 = UnityEngine_Material__HasProperty_437c10c
                                (lVar10,*(undefined8 *)PTR_DAT_04cb72b0,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              lVar6 = *(long *)(param_1 + 0x38);
              lVar10 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar9,0);
              if ((lVar10 != 0) &&
                 (lVar10 = UnityEngine_Material__GetTexture_4383af4(lVar10,*(undefined8 *)puVar1,0),
                 lVar6 != 0)) {
                uVar4 = UnityEngine_Shader__PropertyToID_4372cb4
                                  (*(undefined8 *)PTR_DAT_04cbc968,*(undefined8 *)PTR_DAT_04cbc968,
                                   lVar10,0);
                if ((bRam0000000004fa6d8b & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf6620);
                  FUN_02132f7c(PTR_DAT_04cf6328);
                  FUN_02132f7c(PTR_DAT_04cab588);
                  bRam0000000004fa6d8b = 1;
                }
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar9 = *(long *)(lVar6 + 0x10);
                if (lVar9 != 0) {
                  if (*(long *)(*(long *)PTR_DAT_04cf6328 + 0x38) == 0) {
                    FUN_0216b4cc();
                  }
                  uVar8 = 0;
                  if (lVar10 != 0) {
                    uVar8 = *(undefined8 *)(lVar10 + 0x10);
                  }
                  if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (pcRam0000000004fa6f80 == (code *)0x0) {
                    pcRam0000000004fa6f80 = (code *)FUN_02132f40(&UNK_00e5a606);
                  }
                    /* WARNING: Could not recover jumptable at 0x0447feec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa6f80)(lVar9,uVar4,uVar8);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
              }
            }
          }
        }
      }
    }
  }
LAB_024e5f64:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

