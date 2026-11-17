/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Throw
void Dino_BusSand_App_UI_HomeAtelier__Throw (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, UnityEngine_Vector2_o top, float start, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Throw
   void Dino_BusSand_App_UI_HomeAtelier__Throw (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, UnityEngine_Vector2_o top, float start, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Throw_22d9374
               (float param_1,float param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  double dVar1;
  double dVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar15 = (undefined4)param_3;
  if ((bRam0000000004f9c3de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb6ff8);
    FUN_02132f7c(PTR_DAT_04cb7000);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7008);
    bRam0000000004f9c3de = 1;
  }
  fVar16 = _UNK_00e20af8;
  fVar13 = _UNK_00e20aa0;
  uVar10 = 0;
  do {
    plVar3 = *(long **)(param_5 + 0xf0);
    if (plVar3 == (long *)0x0) goto LAB_023d9838;
    dVar1 = (double)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    plVar3 = *(long **)(param_5 + 0xf0);
    if (((plVar3 == (long *)0x0) ||
        (dVar2 = (double)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0)),
        param_6 == 0)) || (*(long *)(param_6 + 0x50) == 0)) goto LAB_023d9838;
    fVar18 = (float)dVar1 * fVar13 + fVar16;
    fVar19 = (float)dVar2 * fVar13 + fVar16;
    fVar14 = fVar19;
    uVar12 = Dino_BusSand_View_PicturePaper__ColorAt_23daf7c
                       (fVar18,fVar19,*(long *)(param_6 + 0x50),0);
  } while ((uVar10 < 7) && (uVar10 = uVar10 + 1, (float)param_4 <= 0.0));
  if ((float)param_4 <= 0.0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (cRam0000000004f9b949 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b949 = '\x01';
  }
  plVar3 = *(long **)(param_5 + 0xf0);
  if (plVar3 != (long *)0x0) {
    fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_04cacfc0 + 0xb8) + 8);
    fVar17 = *(float *)(*(long *)(*(long *)PTR_DAT_04cacfc0 + 0xb8) + 0xc);
    dVar1 = (double)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    fVar13 = (float)dVar1 * 8.0 + 13.0;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (fVar16 * fVar13,fVar17 * fVar13,0,0,uVar9,*(undefined8 *)PTR_DAT_04cb7008,0,0
                       ,0);
    if ((lVar4 != 0) && (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar5 != 0)
       ) {
      plVar3 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar5,*(undefined8 *)PTR_DAT_04cacf98);
      uVar9 = Dino_BusSand_App_UI_AtelierArt__get_Grain_22d983c();
      if (plVar3 != (long *)0x0) {
        UnityEngine_UI_Image__set_sprite_44a7258(plVar3,uVar9,0);
        (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
        (**(code **)(*plVar3 + 0x2a8))
                  (uVar12,fVar14,param_3 & 0xffffffff,param_4 & 0xffffffff,plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
        plVar6 = *(long **)(param_5 + 0xf0);
        if (plVar6 != (long *)0x0) {
          dVar1 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          plVar6 = *(long **)(param_5 + 0xf0);
          if (plVar6 != (long *)0x0) {
            dVar2 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            param_1 = param_1 + (float)dVar1 * 68.0 + -34.0;
            param_2 = param_2 + (float)dVar2 * 16.0 + -6.0;
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(param_1,param_2,lVar4,0);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0(*puVar7,puVar7[1],puVar7[2],lVar4,0);
            lVar11 = *(long *)(param_5 + 0x128);
            lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb6ff8);
            System_Object___ctor_4870e5c(lVar5,0);
            if (lVar5 != 0) {
              *(long *)(lVar5 + 0x10) = lVar4;
              thunk_FUN_02134474((long *)(lVar5 + 0x10),lVar4);
              *(long *)(lVar5 + 0x18) = (long)plVar3;
              thunk_FUN_02134474((long *)(lVar5 + 0x18),plVar3);
              *(float *)(lVar5 + 0x20) = param_1;
              *(float *)(lVar5 + 0x24) = param_2;
              *(float *)(lVar5 + 0x28) = fVar18;
              *(float *)(lVar5 + 0x2c) = fVar19;
              plVar3 = *(long **)(param_5 + 0xf0);
              *(undefined4 *)(lVar5 + 0x30) = uVar15;
              if (plVar3 != (long *)0x0) {
                dVar1 = (double)(**(code **)(*plVar3 + 0x1b8))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                plVar3 = *(long **)(param_5 + 0xf0);
                *(float *)(lVar5 + 0x34) = (float)dVar1 * 120.0 + 110.0;
                if (plVar3 != (long *)0x0) {
                  dVar1 = (double)(**(code **)(*plVar3 + 0x1b8))
                                            (plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                  plVar3 = *(long **)(param_5 + 0xf0);
                  *(float *)(lVar5 + 0x38) = (float)dVar1 * 120.0 + -60.0;
                  if (plVar3 != (long *)0x0) {
                    dVar1 = (double)(**(code **)(*plVar3 + 0x1b8))
                                              (plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                    *(float *)(lVar5 + 0x3c) = (float)dVar1 * 400.0 + -200.0;
                    if (lVar11 != 0) {
                      lVar4 = *(long *)(lVar11 + 0x10);
                      lVar8 = *(long *)PTR_DAT_04cb7000;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar10 = *(uint *)(lVar11 + 0x18);
                        if (uVar10 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar10 + 1;
                          plVar3 = (long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
                          *plVar3 = lVar5;
                        }
                        else {
                          uVar10 = *(uint *)(lVar11 + 0x18);
                          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                                    (lVar11,uVar10 + 1,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70) + 0x20) + 0xc0) + 0x78));
                          lVar4 = *(long *)(lVar11 + 0x10);
                          *(uint *)(lVar11 + 0x18) = uVar10 + 1;
                          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                          if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                            FUN_0213322c();
                          }
                          plVar3 = (long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
                          *plVar3 = lVar5;
                        }
                        if (iRam00000000051c1b10 != 0) {
                          FUN_02220bf0(1L << ((ulong)plVar3 >> 0xc & 0x3f),
                                       ((ulong)plVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
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
      }
    }
  }
LAB_023d9838:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

