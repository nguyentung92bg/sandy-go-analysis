/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$.ctor
void Dino_BusSand_App_UI_HomePuffs___ctor (Dino_BusSand_App_UI_HomePuffs_o* __this, UnityEngine_Transform_o* parent, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$.ctor
   void Dino_BusSand_App_UI_HomePuffs___ctor (Dino_BusSand_App_UI_HomePuffs_o* __this,
   UnityEngine_Transform_o* parent, int32_t layer, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs___ctor_22e534c
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_04cb7268;
  puVar5 = PTR_DAT_04cb7260;
  puVar4 = PTR_DAT_04cb3c10;
  puVar2 = PTR_DAT_04caa1d8;
  puVar1 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9c422 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7268);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb7278);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb7260);
    FUN_02132f7c(PTR_DAT_04cb7280);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb7288);
    FUN_02132f7c(PTR_DAT_04cb7290);
    FUN_02132f7c(PTR_DAT_04cb7298);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb72a8);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cb72b8);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    bRam0000000004f9c422 = 1;
  }
  puVar7 = PTR_DAT_04cb7298;
  puVar3 = PTR_DAT_04cab588;
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_HomePuffs_P____ctor_3b424e0(uVar8,0x60,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_HomePuffs_P____ctor_3b424e0(uVar8,8,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector2____ctor_3af6bb0(uVar8,*(undefined8 *)PTR_DAT_04cb7270);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7280);
  System_Collections_Generic_List_Color32____ctor_3a0449c(uVar8,*(undefined8 *)PTR_DAT_04cb7278);
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar8,*(undefined8 *)PTR_DAT_04cad6e8);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar8);
  uVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,0x80);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  thunk_FUN_02134474();
  uVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0x80);
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  thunk_FUN_02134474();
  System_Object___ctor_4870e5c(param_1,0);
  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar7,0);
  uVar9 = Dino_BusSand_App_UI_HomePuffs__MakeTexture_22e582c();
  puVar11 = (undefined8 *)(param_1 + 0x40);
  *puVar11 = uVar9;
  thunk_FUN_02134474(puVar11,uVar9);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_Material___ctor_437b5a8(lVar10,uVar8,0);
  if (lVar10 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar10,*(undefined8 *)PTR_DAT_04cb72a8,0);
    UnityEngine_Material__set_renderQueue_437c9d8(lVar10,0xc1c,0);
    plVar12 = (long *)(param_1 + 0x30);
    *plVar12 = lVar10;
    thunk_FUN_02134474(plVar12,lVar10);
    puVar1 = PTR_DAT_04cb72b0;
    if (*plVar12 != 0) {
      UnityEngine_Material__SetTexture_43831cc(*plVar12,*(undefined8 *)PTR_DAT_04cb72b0,*puVar11,0);
      puVar2 = PTR_DAT_04cb72a0;
      if (*plVar12 != 0) {
        UnityEngine_Material__SetFloat_4383048
                  (0x40a00000,*plVar12,*(undefined8 *)PTR_DAT_04cb72a0,0);
        puVar4 = PTR_DAT_04cb72c0;
        if (*plVar12 != 0) {
          UnityEngine_Material__SetFloat_4383048
                    (0x41200000,*plVar12,*(undefined8 *)PTR_DAT_04cb72c0,0);
          lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          UnityEngine_Material___ctor_437b5a8(lVar10,uVar8,0);
          if (lVar10 != 0) {
            UnityEngine_Object__set_name_43c72ec(lVar10,*(undefined8 *)PTR_DAT_04cb7290,0);
            UnityEngine_Material__set_renderQueue_437c9d8(lVar10,0xc26,0);
            plVar12 = (long *)(param_1 + 0x38);
            *plVar12 = lVar10;
            thunk_FUN_02134474(plVar12,lVar10);
            if (*plVar12 != 0) {
              UnityEngine_Material__SetTexture_43831cc(*plVar12,*(undefined8 *)puVar1,*puVar11,0);
              if (*plVar12 != 0) {
                UnityEngine_Material__SetFloat_4383048(0x40a00000,*plVar12,*(undefined8 *)puVar2,0);
                puVar2 = PTR_DAT_04cb72b8;
                puVar1 = PTR_DAT_04cb7288;
                if (*plVar12 != 0) {
                  UnityEngine_Material__SetFloat_4383048
                            (0x3f800000,*plVar12,*(undefined8 *)puVar4,0);
                  uVar8 = Dino_BusSand_App_UI_HomePuffs__Renderer_22e5b88
                                    (param_2,*(undefined8 *)puVar2,param_3,
                                     *(undefined8 *)(param_1 + 0x30));
                  *(undefined8 *)(param_1 + 0x20) = uVar8;
                  thunk_FUN_02134474();
                  uVar8 = Dino_BusSand_App_UI_HomePuffs__Renderer_22e5b88
                                    (param_2,*(undefined8 *)puVar1,param_3,
                                     *(undefined8 *)(param_1 + 0x38));
                  puVar11 = (undefined8 *)(param_1 + 0x28);
                  *puVar11 = uVar8;
                  if (iRam00000000051c1b10 != 0) {
                    FUN_02220bf0(1L << ((ulong)puVar11 >> 0xc & 0x3f),
                                 ((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

