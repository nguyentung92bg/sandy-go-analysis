/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Load
void Dino_BusSand_App_Meta_Profile__Load (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Load
   void Dino_BusSand_App_Meta_Profile__Load (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__Load_226fa7c(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cad258);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cb4790);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cad260);
    FUN_02132f7c(PTR_DAT_04cb4798);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb47a0);
    FUN_02132f7c(PTR_DAT_04cb47a8);
    FUN_02132f7c(PTR_DAT_04cb47b0);
    FUN_02132f7c(PTR_DAT_04cb47b8);
    FUN_02132f7c(PTR_DAT_04cabb68);
    FUN_02132f7c(PTR_DAT_04cb47c0);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04cb47c8);
    FUN_02132f7c(PTR_DAT_04cb4730);
    bRam0000000004f9c0e7 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c128 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9c128 = '\x01';
  }
  puVar3 = PTR_DAT_04caa038;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar4;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  *puVar7 = 0;
  thunk_FUN_02134474(puVar7,0);
  lVar6 = FUN_02133068(*(undefined8 *)puVar3,3);
  uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
  puVar3 = PTR_DAT_04cabb68;
  if (lVar6 == 0) goto LAB_02370948;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar8);
    uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
    uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)puVar3,0);
    puVar3 = PTR_DAT_04cb4730;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28),uVar8);
      uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)puVar3,0);
      if (2 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x30) = uVar8;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),uVar8);
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          lVar10 = *(long *)puVar4;
        }
        else {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) goto LAB_0237094c;
            uVar8 = *(undefined8 *)(lVar6 + 0x20 + uVar13 * 8);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = Dino_BusSand_App_Meta_Profile__TryRead_2270a5c(uVar8);
            if (cRam0000000004f9c128 == '\0') {
              FUN_02132f7c(puVar4);
              cRam0000000004f9c128 = '\x01';
            }
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar4;
            }
            puVar7 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
            *puVar7 = uVar9;
            thunk_FUN_02134474(puVar7,uVar9);
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(puVar4);
              cRam0000000004f9b894 = '\x01';
            }
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar4;
            }
            if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x10) != 0) goto LAB_0236fde4;
            uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        uVar8 = 0;
LAB_0236fde4:
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar4;
        }
        if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) != 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar13 = System_String__op_Inequality_46d110c(uVar8,uVar9,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = System_IO_Path__GetFileName_4807f9c(uVar8,0);
            uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb47c0,uVar9,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
            }
            UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
            plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
            puVar3 = PTR_DAT_04cb47b0;
            if (plVar11 == (long *)0x0) goto LAB_02370948;
            if ((*(long *)PTR_DAT_04cb47b0 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb47b0,
                                           *(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
LAB_02370950:
              uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar8,0);
            }
            if ((int)plVar11[3] == 0) goto LAB_0237094c;
            plVar11[4] = *(long *)puVar3;
            thunk_FUN_02134474();
            lVar6 = System_IO_Path__GetExtension_4807e80(uVar8,0);
            if ((lVar6 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
            goto LAB_02370950;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_0237094c;
            plVar11[5] = lVar6;
            thunk_FUN_02134474(plVar11 + 5,lVar6);
            if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb47b8,plVar11,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar13 = System_IO_File__Exists_47f230c(uVar8,0);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
              uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
              uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb47c8,0);
              System_IO_File__Copy_47f89f0(uVar8,uVar9,1,0);
              uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
              System_IO_File__Delete_47f8b84(uVar8,0);
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__Save_226c548();
          }
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar4;
        }
        if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar13 = System_IO_File__Exists_47f230c(uVar8,0);
          lVar6 = *(long *)puVar4;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb47c8,0);
            System_IO_File__Copy_47f89f0(uVar8,uVar9,1,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cb47a8,0);
            lVar6 = *(long *)puVar4;
          }
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar4;
        }
        if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__NewPlayer_2270d74();
          lVar6 = *(long *)puVar4;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x130) == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar6 = *(long *)puVar4;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar4;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (uVar8,*(undefined8 *)PTR_DAT_04cb4790);
            if (lVar6 == 0) goto LAB_02370948;
            *(undefined8 *)(lVar6 + 0x130) = uVar8;
            thunk_FUN_02134474(lVar6 + 0x130,uVar8);
            lVar6 = *(long *)puVar4;
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar4;
          }
          lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar10 != 0) {
            if (*(long *)(lVar10 + 0x128) == 0) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar6 = *(long *)puVar4;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar4;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
              uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
              System_Collections_Generic_List_int____ctor_3a2b7dc
                        (uVar8,*(undefined8 *)PTR_DAT_04cad6e8);
              if (lVar6 == 0) goto LAB_02370948;
              *(undefined8 *)(lVar6 + 0x128) = uVar8;
              thunk_FUN_02134474(lVar6 + 0x128,uVar8);
              lVar6 = *(long *)puVar4;
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar6 = *(long *)puVar4;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar4;
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar10 != 0) {
              if (*(long *)(lVar10 + 0x148) == 0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b894 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cabaf8);
                  cRam0000000004f9b894 = '\x01';
                }
                lVar6 = *(long *)puVar4;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar6 = *(long *)puVar4;
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
                System_Collections_Generic_List_object____ctor_3a8138c
                          (uVar8,*(undefined8 *)PTR_DAT_04cad258);
                if (lVar6 == 0) goto LAB_02370948;
                *(undefined8 *)(lVar6 + 0x148) = uVar8;
                thunk_FUN_02134474(lVar6 + 0x148,uVar8);
                lVar6 = *(long *)puVar4;
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar6 = *(long *)puVar4;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar4;
              }
              lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
              if (lVar10 != 0) {
                if (*(long *)(lVar10 + 0x110) == 0) {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar6 = *(long *)puVar4;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar4;
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
                  System_Collections_Generic_List_object____ctor_3a8138c
                            (uVar8,*(undefined8 *)PTR_DAT_04cab740);
                  if (lVar6 == 0) goto LAB_02370948;
                  *(undefined8 *)(lVar6 + 0x110) = uVar8;
                  thunk_FUN_02134474(lVar6 + 0x110,uVar8);
                  lVar6 = *(long *)puVar4;
                }
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b894 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cabaf8);
                  cRam0000000004f9b894 = '\x01';
                }
                lVar6 = *(long *)puVar4;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar6 = *(long *)puVar4;
                }
                lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                if (lVar10 != 0) {
                  if (*(long *)(lVar10 + 0x118) == 0) {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b894 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cabaf8);
                      cRam0000000004f9b894 = '\x01';
                    }
                    lVar6 = *(long *)puVar4;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar6 = *(long *)puVar4;
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
                    System_Collections_Generic_List_object____ctor_3a8138c
                              (uVar8,*(undefined8 *)PTR_DAT_04cab740);
                    if (lVar6 == 0) goto LAB_02370948;
                    *(undefined8 *)(lVar6 + 0x118) = uVar8;
                    thunk_FUN_02134474(lVar6 + 0x118,uVar8);
                    lVar6 = *(long *)puVar4;
                  }
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar6 = *(long *)puVar4;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar4;
                  }
                  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                  if (lVar10 != 0) {
                    if (*(long *)(lVar10 + 0x88) == 0) {
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b894 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cabaf8);
                        cRam0000000004f9b894 = '\x01';
                      }
                      lVar6 = *(long *)puVar4;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar6 = *(long *)puVar4;
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb47a0);
                      Dino_BusSand_App_Meta_TrackAttempt___ctor_226f064();
                      if (lVar6 == 0) goto LAB_02370948;
                      puVar7 = (undefined8 *)(lVar6 + 0x88);
                      *puVar7 = uVar8;
                      thunk_FUN_02134474(puVar7,uVar8);
                      lVar6 = *(long *)puVar4;
                    }
                    puVar3 = PTR_DAT_04cac668;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_Profile__TouchActiveDay_2270e48();
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_LiveOps__ReloadAll_2241548(0);
                    if (cRam0000000004f9b894 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cabaf8);
                      cRam0000000004f9b894 = '\x01';
                    }
                    lVar6 = *(long *)puVar4;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar6 = *(long *)puVar4;
                    }
                    puVar3 = PTR_DAT_04cab550;
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                    if (lVar6 != 0) {
                      uVar13 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar6 + 0x60),0)
                      ;
                      puVar5 = PTR_DAT_04caba50;
                      if ((uVar13 & 1) == 0) {
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (cRam0000000004f9b894 == '\0') {
                          FUN_02132f7c(PTR_DAT_04cabaf8);
                          cRam0000000004f9b894 = '\x01';
                        }
                        lVar6 = *(long *)puVar4;
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar6 = *(long *)puVar4;
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                        if (lVar6 == 0) goto LAB_02370948;
                        uVar8 = *(undefined8 *)(lVar6 + 0x60);
                      }
                      else {
                        lVar6 = *(long *)PTR_DAT_04caba50;
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar6 = *(long *)puVar5;
                        }
                        if (*(char *)(*(long *)(lVar6 + 0xb8) + 8) == '\0') {
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar8 = Dino_BusSand_App_Lang__DeviceCode_215fc50(0);
                        }
                        else {
                          uVar8 = *(undefined8 *)PTR_DAT_04cac078;
                        }
                      }
                      puVar5 = PTR_DAT_04cab530;
                      lVar6 = *(long *)puVar3;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar6 = *(long *)puVar3;
                      }
                      **(undefined8 **)(lVar6 + 0xb8) = uVar8;
                      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
                      uVar8 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_LanguageFonts__Apply_2152684(uVar8,0);
                      Dino_BusSand_App_Meta_WinStreak__Reload_2293628(0);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b894 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cabaf8);
                        cRam0000000004f9b894 = '\x01';
                      }
                      lVar6 = *(long *)puVar4;
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar6 = *(long *)puVar4;
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                      if (lVar6 != 0) {
                        cVar1 = *(char *)(lVar6 + 0x58);
                        if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        Dino_BusSand_App_Audio__set_SfxOn_214d578(cVar1 != '\0',0);
                        if (cRam0000000004f9b894 == '\0') {
                          FUN_02132f7c(PTR_DAT_04cabaf8);
                          cRam0000000004f9b894 = '\x01';
                        }
                        lVar6 = *(long *)puVar4;
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar6 = *(long *)puVar4;
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                        if (lVar6 != 0) {
                          Dino_BusSand_App_Audio__set_MusicOn_214d658
                                    (*(undefined1 *)(lVar6 + 0x59),0);
                          if (cRam0000000004f9b894 == '\0') {
                            FUN_02132f7c(PTR_DAT_04cabaf8);
                            cRam0000000004f9b894 = '\x01';
                          }
                          lVar6 = *(long *)puVar4;
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar6 = *(long *)puVar4;
                          }
                          puVar3 = PTR_DAT_04cab230;
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                          if (lVar6 != 0) {
                            uVar2 = *(undefined1 *)(lVar6 + 0x5a);
                            lVar6 = *(long *)PTR_DAT_04cab230;
                            if (*(int *)(lVar6 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar6 = *(long *)puVar3;
                            }
                            **(undefined1 **)(lVar6 + 0xb8) = uVar2;
                            if (cRam0000000004f9b894 == '\0') {
                              FUN_02132f7c(PTR_DAT_04cabaf8);
                              cRam0000000004f9b894 = '\x01';
                            }
                            lVar6 = *(long *)puVar4;
                            if (*(int *)(lVar6 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar6 = *(long *)puVar4;
                            }
                            puVar4 = PTR_DAT_04cab238;
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                            if (lVar6 != 0) {
                              uVar2 = *(undefined1 *)(lVar6 + 0x5a);
                              lVar6 = *(long *)PTR_DAT_04cab238;
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                                lVar6 = *(long *)puVar4;
                              }
                              **(undefined1 **)(lVar6 + 0xb8) = uVar2;
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
LAB_02370948:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_0237094c:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

