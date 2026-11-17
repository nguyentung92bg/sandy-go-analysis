/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_1
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_1 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_1
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_1
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_1_2323e48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000004f9c5c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf610);
    FUN_02132f7c(PTR_DAT_04caf620);
    bRam0000000004f9c5c8 = 1;
  }
  lVar6 = Dino_BusSand_App_UI_LiveOpsHome__get_Tower_2321878();
  if ((lVar6 == 0) ||
     (uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(lVar6,0),
     (uVar7 & 1) == 0)) {
    lVar10 = *(long *)PTR_DAT_04ca9d18;
    lVar6 = *(long *)(lVar10 + 0x38);
    if (lVar6 == 0) {
      FUN_0216b4cc(lVar10);
      lVar6 = *(long *)(lVar10 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cad330;
    lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    puVar3 = PTR_DAT_04caf620;
    puVar2 = PTR_DAT_04caf610;
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar10 = *(long *)puVar2;
    lVar9 = *(long *)puVar3;
    if ((bRam0000000004f9c186 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab550,lVar9,lVar6,0);
      bRam0000000004f9c186 = 1;
    }
    uVar7 = System_String__IsNullOrEmpty_46d2084(lVar10,0);
    puVar1 = PTR_DAT_04cab550;
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Lang__Has_215fb88(lVar10,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((bRam0000000004f9b81c & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cab550,lVar6,0);
          FUN_02132f7c(PTR_DAT_04cac078);
          FUN_02132f7c(PTR_DAT_04ca9c30);
          bRam0000000004f9b81c = 1;
        }
        lVar9 = 0;
        uVar7 = System_String__IsNullOrEmpty_46d2084(lVar10,0);
        puVar1 = PTR_DAT_04cab550;
        if ((uVar7 & 1) != 0) {
          return *(long *)PTR_DAT_04ca9c30;
        }
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_Lang__Current_215f3d0();
        uVar7 = Dino_BusSand_App_Lang__Text_215f904(uVar8,lVar10,&stack0xffffffffffffffd8);
        if ((uVar7 & 1) == 0) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
          }
          uVar7 = System_String__op_Equality_46d1108
                            (**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
          if ((uVar7 & 1) != 0) {
            return lVar10;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_Lang__English_215f81c();
          uVar7 = Dino_BusSand_App_Lang__Text_215f904(uVar8,lVar10,&stack0xffffffffffffffd8);
          if ((uVar7 & 1) == 0) {
            return lVar10;
          }
        }
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
          lVar9 = System_String__Format_46d3570(0,lVar6,0);
        }
        return lVar9;
      }
    }
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      if (lVar6 != 0) {
        uStack_38 = 0;
        uStack_40 = 0;
        System_ParamsArray___ctor_483f6e0(&uStack_40,lVar6,0);
        uStack_58 = uStack_38;
        uStack_60 = uStack_40;
        uStack_48 = 0;
        uStack_50 = 0;
        lVar6 = System_String__FormatHelper_46d33ec(0,lVar9,&uStack_60);
        return lVar6;
      }
      puVar1 = PTR_DAT_04ccc5f0;
      if (lVar9 != 0) {
        puVar1 = PTR_DAT_04cc6cb8;
      }
      uVar8 = thunk_FUN_021985a8(puVar1,0,0);
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
      uVar4 = thunk_FUN_0216e89c();
      System_ArgumentNullException___ctor_47afb54(uVar4,uVar8,0);
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar4,uVar8);
    }
    return lVar9;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (lVar6,*(undefined8 *)PTR_DAT_04caf910);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *(long *)(lVar6 + 0x28);
  lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  if (*(int *)(*(long *)PTR_DAT_04caf600 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf600);
  }
  uVar7 = (lVar10 - lVar6) / 1000;
  if ((bRam0000000004f9c42e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30,0);
    bRam0000000004f9c42e = 1;
  }
  if ((long)uVar7 < 1) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  uVar8 = 0;
  if ((bRam0000000004f9b7b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038,0);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04cab390);
    FUN_02132f7c(PTR_DAT_04cab398);
    bRam0000000004f9b7b7 = 1;
    uVar8 = extraout_x1;
  }
  puVar2 = PTR_DAT_04cab3a8;
  puVar1 = PTR_DAT_04cab3a0;
  uStack_38 = 0;
  if ((long)uVar7 < 1) {
    return *(long *)PTR_DAT_04cab390;
  }
  if (0x2a2 < uVar7 >> 7) {
    if ((bRam0000000004f9b7b8 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab3a8,uVar8);
      FUN_02132f7c(PTR_DAT_04cab3a0);
      bRam0000000004f9b7b8 = 1;
    }
    uVar8 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    uVar4 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffd8,0);
    lVar6 = System_String__Concat_46d30e8(uVar8,*(undefined8 *)puVar1,uVar4,*(undefined8 *)puVar2,0)
    ;
    return lVar6;
  }
  lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
  puVar1 = PTR_DAT_04cab398;
  uStack_38 = (uVar7 & 0xffffffff) / 0xe10;
  uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)PTR_DAT_04cab398,0);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar8);
      puVar2 = PTR_DAT_04cab388;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04cab388;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28));
        iVar11 = (int)((uVar7 & 0xffffffff) / 0x3c);
        uStack_38 = (ulong)(iVar11 + (((uint)((uVar7 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c
                           ) & 0xffff;
        uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar1,0);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),uVar8);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar2;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38));
            uStack_38 = (ulong)(uint)((int)uVar7 + iVar11 * -0x3c);
            uVar8 = System_Int64__ToString_482ec3c(&uStack_38,*(undefined8 *)puVar1,0);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar8;
              thunk_FUN_02134474();
              lVar6 = System_String__Concat_46d31f0(lVar6,0);
              return lVar6;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

