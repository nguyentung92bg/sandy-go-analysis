/* IL2CPP: Dino.BusSand.RenderQuality$$OnBeginCamera
void Dino_BusSand_RenderQuality__OnBeginCamera (UnityEngine_Rendering_ScriptableRenderContext_o ctx, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$OnBeginCamera
   void Dino_BusSand_RenderQuality__OnBeginCamera (UnityEngine_Rendering_ScriptableRenderContext_o
   ctx, UnityEngine_Camera_o* cam, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__OnBeginCamera_238a650(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c894 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbd58);
    FUN_02132f7c(PTR_DAT_04cbbd60);
    FUN_02132f7c(PTR_DAT_04cbbd68);
    FUN_02132f7c(PTR_DAT_04cbbd70);
    FUN_02132f7c(PTR_DAT_04cbbd78);
    FUN_02132f7c(PTR_DAT_04cbbd80);
    FUN_02132f7c(PTR_DAT_04cbbd88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbd90);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbd50);
    bRam0000000004f9c894 = 1;
  }
  plStack_70 = (long *)0x0;
  lStack_68 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar10 & 1) == 0) {
    if (param_2 == 0) {
LAB_0248a9c0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = UnityEngine_Component__TryGetComponent_object__26fa6e4
                       (param_2,&lStack_68,*(undefined8 *)PTR_DAT_04cbbd58);
    if ((uVar10 & 1) != 0) {
      if (lStack_68 == 0) goto LAB_0248a9c0;
      if (*(int *)(lStack_68 + 0x2c) == 1) {
        if (*(int *)(*(long *)PTR_DAT_04cbbd50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
        if ((uVar10 & 1) == 0) {
          if (lVar11 == 0) goto LAB_0248a9c0;
          auVar16 = UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__get_rendererDataList_41dbc9c
                              (lVar11,0);
          puVar8 = PTR_DAT_04cbbd80;
          puVar7 = PTR_DAT_04cbbd78;
          puVar6 = PTR_DAT_04cbbd68;
          puVar5 = PTR_DAT_04cbbd60;
          puVar4 = PTR_DAT_04cb27f8;
          if (0 < auVar16._8_4_) {
            uVar10 = 0;
            do {
              lVar11 = *(long *)(auVar16._0_8_ + uVar10 * 8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
              if ((uVar12 & 1) == 0) {
                if ((lVar11 == 0) || (*(long *)(lVar11 + 0x30) == 0)) goto LAB_0248a9c0;
                System_Collections_Generic_List_object___GetEnumerator_3a825f0
                          (&uStack_98,*(long *)(lVar11 + 0x30),*(undefined8 *)PTR_DAT_04cbbd88);
                uStack_80 = uStack_98;
                uStack_98 = 0;
                puStack_78 = puStack_90;
                plStack_70 = plStack_88;
                puStack_90 = &uStack_80;
LAB_0248a868:
                uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_80,*(undefined8 *)puVar6);
                plVar9 = plStack_70;
                if ((uVar12 & 1) != 0) {
                  if (plStack_70 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
                    if (((bVar1 <= *(byte *)(*plStack_70 + 0x130)) &&
                        (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) ==
                         *(long *)puVar7)) && ((char)plStack_70[3] != '\0')) {
                      lVar11 = *(long *)puVar4;
                      *(undefined1 *)(plStack_70 + 3) = 0;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar11 = *(long *)puVar4;
                      }
                      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
                      if (lVar11 != 0) {
                        lVar13 = *(long *)(lVar11 + 0x10);
                        lVar15 = *(long *)puVar8;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar13 != 0) {
                          uVar2 = *(uint *)(lVar11 + 0x18);
                          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                            puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                            *puVar14 = plVar9;
                            thunk_FUN_02134474(puVar14,plVar9);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                      (lVar11,plVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                          goto LAB_0248a868;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                  goto LAB_0248a868;
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_80,*(undefined8 *)puVar5);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != (auVar16._8_8_ & 0xffffffff));
          }
        }
      }
    }
  }
  return;
}

