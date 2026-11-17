/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Tick
void Dino_BusSand_App_Meta_Profile__Tick (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Tick
   void Dino_BusSand_App_Meta_Profile__Tick (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__Tick_22714c8(void)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0ef = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x28) != '\0') {
    fVar12 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    if (*(float *)(*(long *)(lVar7 + 0xb8) + 0x2c) <= fVar12) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Save_226c548();
      lVar7 = *(long *)puVar2;
    }
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacea0);
    bRam0000000004f9c0ff = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x28);
    iVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
    if (iVar1 < iVar4) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x30) < 1) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
          uVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090();
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x30) = uVar8;
            return;
          }
        }
        else {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_Meta_Profile__Now_2271090();
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar2;
          }
          lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
          if (lVar10 != 0) {
            uVar11 = lVar7 - *(long *)(lVar10 + 0x30);
            if ((long)uVar11 < 0x708) {
              return;
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar7 = *(long *)puVar2;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar2;
            }
            lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (lVar9 != 0) {
              iVar1 = *(int *)(lVar9 + 0x28);
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(puVar2);
                lVar7 = *(long *)puVar2;
                cRam0000000004f9b894 = '\x01';
              }
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar2;
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
              uVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar9 = *(long *)puVar2;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar2;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
              if (lVar9 != 0) {
                iVar4 = *(int *)(lVar9 + 0x28);
                uVar11 = uVar11 / 0x708;
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar5 = System_Math__Min_4831118(uVar5,iVar4 + (int)uVar11,0);
                cVar3 = cRam0000000004f9b894;
                if (lVar7 != 0) {
                  *(undefined4 *)(lVar7 + 0x28) = uVar5;
                  if (cVar3 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar7 = *(long *)puVar2;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar2;
                    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                    if (cRam0000000004f9b894 == '\0') {
                      FUN_02132f7c(puVar2);
                      lVar7 = *(long *)puVar2;
                      cRam0000000004f9b894 = '\x01';
                    }
                  }
                  else {
                    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                  }
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar2;
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                  if (lVar7 != 0) {
                    iVar4 = *(int *)(lVar7 + 0x28);
                    iVar6 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0();
                    if (iVar4 < iVar6) {
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b894 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cabaf8);
                        cRam0000000004f9b894 = '\x01';
                      }
                      lVar7 = *(long *)puVar2;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar7 = *(long *)puVar2;
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                      if (lVar7 == 0) goto LAB_02371abc;
                      lVar7 = *(long *)(lVar7 + 0x30) + ((long)(uVar11 * 0x70800000000) >> 0x20);
                    }
                    else {
                      lVar7 = 0;
                    }
                    if (lVar9 != 0) {
                      lVar10 = *(long *)puVar2;
                      *(long *)(lVar9 + 0x30) = lVar7;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
                      if (cRam0000000004f9b894 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cabaf8);
                        cRam0000000004f9b894 = '\x01';
                      }
                      lVar7 = *(long *)puVar2;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar7 = *(long *)puVar2;
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                      if (lVar7 != 0) {
                        iVar4 = *(int *)(lVar7 + 0x28);
                        if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        Dino_BusSand_App_Meta_GameTracking__Resource_221629c
                                  (0x3ea,(long)(iVar4 - iVar1),*(undefined8 *)PTR_DAT_04cacea0,0,0);
                        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                        if (lVar7 == 0) {
                          return;
                        }
                    /* WARNING: Could not recover jumptable at 0x02371aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(lVar7 + 0x18))
                                  (*(undefined8 *)(lVar7 + 0x40),0x3ea,*(undefined8 *)(lVar7 + 0x28)
                                  );
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
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
        return;
      }
    }
  }
LAB_02371abc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

