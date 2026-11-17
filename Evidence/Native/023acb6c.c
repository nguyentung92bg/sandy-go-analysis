/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$ToRequest
Dino_BusSand_App_UI_CommonGetPanel_Request_o* Dino_BusSand_App_UI_CommonGetPanel__ToRequest (Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023ad868) */
/* WARNING: Removing unreachable block (ram,0x023ad870) */
/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$ToRequest
   Dino_BusSand_App_UI_CommonGetPanel_Request_o* Dino_BusSand_App_UI_CommonGetPanel__ToRequest
   (Il2CppObject* param, const MethodInfo* method); */

long * Dino_BusSand_App_UI_CommonGetPanel__ToRequest_22acb6c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_78;
  long **pplStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar3 = PTR_DAT_04cb5ed8;
  if ((bRam0000000004f9c2b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cb5ee0);
    FUN_02132f7c(PTR_DAT_04cb5ee8);
    FUN_02132f7c(PTR_DAT_04cb5ef0);
    FUN_02132f7c(PTR_DAT_04cb5ef8);
    FUN_02132f7c(PTR_DAT_04cb5f00);
    FUN_02132f7c(PTR_DAT_04cb5f08);
    FUN_02132f7c(PTR_DAT_04cb5f10);
    FUN_02132f7c(PTR_DAT_04cb5f18);
    FUN_02132f7c(PTR_DAT_04cb5f20);
    FUN_02132f7c(PTR_DAT_04cb5f28);
    FUN_02132f7c(PTR_DAT_04cb5f30);
    FUN_02132f7c(PTR_DAT_04cb5f38);
    FUN_02132f7c(PTR_DAT_04cb5f40);
    FUN_02132f7c(PTR_DAT_04cb5f48);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cb1cb8);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cb1cc0);
    FUN_02132f7c(PTR_DAT_04cb5ed8);
    bRam0000000004f9c2b6 = 1;
  }
  puVar4 = PTR_DAT_04cb5ee0;
  puVar2 = PTR_DAT_04ca9c08;
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plStack_68 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
      return param_1;
    }
  }
  plVar5 = (long *)thunk_FUN_0216e89c();
  Dino_BusSand_App_UI_CommonGetPanel_Request___ctor_22ae4b4();
  plVar6 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_04cb5ef0;
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023acdb0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,lVar8,0);
LAB_023acdb0:
    puVar3 = PTR_DAT_04cb5f20;
    plStack_38 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    pplStack_70 = &plStack_38;
    uStack_78 = 0;
    do {
      plVar6 = plStack_38;
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_38;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ace24;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_38,*(long *)puVar2,0);
LAB_023ace24:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = plStack_38;
      if ((uVar10 & 1) == 0) {
        if (plStack_38 == (long *)0x0) {
          return plVar5;
        }
        lVar9 = *plStack_38;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        lVar8 = *(long *)PTR_DAT_04ca9b30;
        if (uVar10 == 0) goto LAB_023ad6d8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_023acee8;
      }
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_38;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ace88;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_38,*(long *)puVar3,0);
LAB_023ace88:
      auVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578
                (plVar5,auVar12._0_8_ & 0xffffffff,auVar12._8_8_);
    } while( true );
  }
  plVar6 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5ef0);
  puVar4 = PTR_DAT_04cb5f10;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023acf74;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar3,0);
LAB_023acf74:
    plStack_40 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = PTR_DAT_04cb5f18;
    pplStack_70 = &plStack_40;
    uStack_78 = 0;
    do {
      plVar6 = plStack_40;
      if (plStack_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_40;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023acfe8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_40,*(long *)puVar2,0);
LAB_023acfe8:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = plStack_40;
      if ((uVar10 & 1) == 0) {
        if (plStack_40 == (long *)0x0) {
          return plVar5;
        }
        lVar9 = *plStack_40;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        lVar8 = *(long *)PTR_DAT_04ca9b30;
        plVar6 = plStack_40;
        if (uVar10 == 0) goto LAB_023ad6d8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_023ad0a4;
      }
      if (plStack_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_40;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad04c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_40,*(long *)puVar3,0);
LAB_023ad04c:
      lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578(plVar5,lVar8,lVar8 >> 0x20);
    } while( true );
  }
  plVar6 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5f10);
  puVar3 = PTR_DAT_04cb5f08;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ad128;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar4,0);
LAB_023ad128:
    plStack_48 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = PTR_DAT_04cb5f48;
    pplStack_70 = &plStack_48;
    uStack_78 = 0;
    do {
      plVar6 = plStack_48;
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_48;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad19c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_48,*(long *)puVar2,0);
LAB_023ad19c:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = plStack_48;
      if ((uVar10 & 1) == 0) {
        if (plStack_48 == (long *)0x0) {
          return plVar5;
        }
        lVar9 = *plStack_48;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        lVar8 = *(long *)PTR_DAT_04ca9b30;
        plVar6 = plStack_48;
        if (uVar10 == 0) goto LAB_023ad6d8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_023ad260;
      }
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_48;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad200;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_48,*(long *)puVar3,0);
LAB_023ad200:
      auVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578
                (plVar5,auVar12._0_8_ & 0xffffffff,auVar12._8_8_);
    } while( true );
  }
  plVar6 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5f08);
  puVar4 = PTR_DAT_04cb5ee8;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ad2e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar3,0);
LAB_023ad2e4:
    plStack_50 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = PTR_DAT_04cb5f28;
    pplStack_70 = &plStack_50;
    uStack_78 = 0;
    do {
      plVar6 = plStack_50;
      if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_50;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad358;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_50,*(long *)puVar2,0);
LAB_023ad358:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = plStack_50;
      if ((uVar10 & 1) == 0) {
        if (plStack_50 == (long *)0x0) {
          return plVar5;
        }
        lVar9 = *plStack_50;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        lVar8 = *(long *)PTR_DAT_04ca9b30;
        plVar6 = plStack_50;
        if (uVar10 == 0) goto LAB_023ad6d8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_023ad414;
      }
      if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_50;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad3bc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_50,*(long *)puVar3,0);
LAB_023ad3bc:
      lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578(plVar5,lVar8,lVar8 >> 0x20);
    } while( true );
  }
  plVar6 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5ee8);
  puVar3 = PTR_DAT_04cb5f00;
  if (plVar6 == (long *)0x0) {
    lVar8 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5f00);
    puVar4 = PTR_DAT_04cb5ef8;
    if (lVar8 != 0) {
      plVar6 = (long *)FUN_01e79d5c(0,*(undefined8 *)puVar3,lVar8);
      puVar3 = PTR_DAT_04cb5f38;
      pplStack_70 = &plStack_60;
      uStack_78 = 0;
      do {
        plStack_60 = plVar6;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023ad4c0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar2,0);
LAB_023ad4c0:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        plVar6 = plStack_60;
        if ((uVar10 & 1) == 0) {
          FUN_01e76e5c(&uStack_78);
          return plVar5;
        }
        if (plStack_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *plStack_60;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023ad524;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plStack_60,*(long *)puVar3,0);
LAB_023ad524:
        lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        plVar6 = plStack_60;
        if ((lVar8 != 0) && (1 < *(int *)(lVar8 + 0x18))) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578
                    (plVar5,*(undefined4 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28));
          plVar6 = plStack_60;
        }
      } while( true );
    }
    lVar8 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cb5ef8);
    if (lVar8 == 0) {
      return plVar5;
    }
    plStack_68 = (long *)FUN_01e79d5c(0,*(undefined8 *)puVar4,lVar8);
    puVar3 = PTR_DAT_04cb5f30;
    pplStack_70 = &plStack_68;
    uStack_78 = 0;
    do {
      plVar6 = plStack_68;
      if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_68;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad7b0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)puVar2,0);
LAB_023ad7b0:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = plStack_68;
      if ((uVar10 & 1) == 0) {
        FUN_01e76e5c(&uStack_78);
        return plVar5;
      }
      if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *plStack_68;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023ad814;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)puVar3,0);
LAB_023ad814:
      lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578(plVar5,lVar8,lVar8 >> 0x20);
    } while( true );
  }
  lVar8 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_023ad578;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar4,0);
LAB_023ad578:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar3 = PTR_DAT_04cb5f40;
  pplStack_70 = &plStack_58;
  uStack_78 = 0;
  do {
    plStack_58 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ad5ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar2,0);
LAB_023ad5ec:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar6 = plStack_58;
    if ((uVar10 & 1) == 0) {
      if (plStack_58 == (long *)0x0) {
        return plVar5;
      }
      lVar9 = *plStack_58;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)PTR_DAT_04ca9b30;
      plVar6 = plStack_58;
      if (uVar10 == 0) goto LAB_023ad6d8;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_023ad6c0;
    }
    if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *plStack_58;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ad650;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plStack_58,*(long *)puVar3,0);
LAB_023ad650:
    lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar6 = plStack_58;
    if ((lVar8 != 0) && (1 < *(int *)(lVar8 + 0x18))) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonGetPanel_Request__Add_22ae578
                (plVar5,*(undefined4 *)(lVar8 + 0x20),(long)*(int *)(lVar8 + 0x24));
      plVar6 = plStack_58;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_023acee8:
    if (*(long *)(piVar11 + -2) == lVar8) goto LAB_023ad6e8;
  }
  goto LAB_023ad6d8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_023ad0a4:
    plVar6 = plStack_40;
    if (*(long *)(piVar11 + -2) == lVar8) goto LAB_023ad6e8;
  }
  goto LAB_023ad6d8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_023ad260:
    plVar6 = plStack_48;
    if (*(long *)(piVar11 + -2) == lVar8) goto LAB_023ad6e8;
  }
  goto LAB_023ad6d8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_023ad414:
    plVar6 = plStack_50;
    if (*(long *)(piVar11 + -2) == lVar8) goto LAB_023ad6e8;
  }
  goto LAB_023ad6d8;
LAB_023ad6e8:
  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
  goto LAB_023ad6f4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    plVar6 = plStack_58;
    if (uVar10 == 0) break;
LAB_023ad6c0:
    plVar6 = plStack_58;
    if (*(long *)(piVar11 + -2) == lVar8) goto LAB_023ad6e8;
  }
LAB_023ad6d8:
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar6,lVar8,0);
LAB_023ad6f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return plVar5;
}

