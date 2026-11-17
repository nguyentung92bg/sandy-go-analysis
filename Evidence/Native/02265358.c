/* IL2CPP: Dino.BusSand.App.GameApp$$Update
void Dino_BusSand_App_GameApp__Update (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$Update
   void Dino_BusSand_App_GameApp__Update (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__Update_2165358(long param_1)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fStack_34;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b857 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b857 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__Tick_22714c8(0);
  if (*(char *)(param_1 + 0x3a) != '\0') {
    return;
  }
  fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  if (*(int *)(*(long *)PTR_DAT_04cab240 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab2a8);
    FUN_02132f7c(PTR_DAT_04cab268);
    FUN_02132f7c(PTR_DAT_04cab2b0);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cab2c0);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b7b1 = 1;
  }
  lVar3 = *(long *)puVar2;
  fStack_34 = 0.0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar7 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar7 + 0x24) == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    iVar8 = *(int *)(lVar7 + 0x30);
    if (iVar8 < 2) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
        lVar7 = *(long *)(lVar3 + 0xb8);
        iVar8 = *(int *)(lVar7 + 0x30);
      }
      if (iVar8 == 1) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
          lVar7 = *(long *)(lVar3 + 0xb8);
        }
        *(undefined4 *)(lVar7 + 0x30) = 2;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      *puVar6 = *(undefined8 *)PTR_DAT_04cab2a8;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                     ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    fVar1 = _UNK_00e20754;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (fVar1 < fVar10) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
        lVar7 = *(long *)(lVar3 + 0xb8);
      }
      *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar7 = *(long *)(lVar3 + 0xb8);
    if (*(float *)(lVar7 + 0x18) < fVar10) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 8);
      *(float *)(lVar7 + 0x18) = fVar10;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10));
      lVar3 = *(long *)puVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_BootTrace__get_Verbose_214dec8();
    if ((_UNK_00e2043c < fVar10) && ((uVar4 & 1) != 0)) {
      lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0224eae8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cab268;
      thunk_FUN_02134474();
      uVar9 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_BootTrace__F_214eaf0(uVar9);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar5);
      if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cab2b0;
      thunk_FUN_02134474();
      fStack_34 = fVar10 * 1000.0;
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar5 = System_Single__ToString_4842760(&fStack_34,*(undefined8 *)PTR_DAT_04cab288,uVar5,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x38) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar5);
      if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cab2c0;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40));
      if (*(uint *)(lVar3 + 0x18) < 6) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48));
      if (*(uint *)(lVar3 + 0x18) < 7) goto LAB_0224eae8;
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_04cab2b8;
      thunk_FUN_02134474();
      uVar5 = System_String__Concat_46d31f0(lVar3,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__Log_4360fc8(uVar5,0);
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = *(undefined8 *)PTR_DAT_04cab2a8;
    thunk_FUN_02134474();
  }
  return;
}

