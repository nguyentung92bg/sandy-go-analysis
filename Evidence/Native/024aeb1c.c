/* IL2CPP: Dino.BusSand.View.GameView.<ShuffleBounce>d__197$$MoveNext
bool Dino_BusSand_View_GameView__ShuffleBounce_d__197__MoveNext (Dino_BusSand_View_GameView__ShuffleBounce_d__197_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<ShuffleBounce>d__197$$MoveNext
   bool Dino_BusSand_View_GameView__ShuffleBounce_d__197__MoveNext
   (Dino_BusSand_View_GameView__ShuffleBounce_d__197_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_View_GameView__ShuffleBounce_d__197__MoveNext_23aeb1c
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((bRam0000000004f9c968 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cbc378);
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfa8);
    FUN_02132f7c(PTR_DAT_04cbbfb0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caaa78);
    bRam0000000004f9c968 = 1;
  }
  puVar3 = PTR_DAT_04caaa78;
  puVar2 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar10 = *(long *)(param_4 + 0x30);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    iVar1 = *(int *)(param_4 + 0x48) + 1;
    *(int *)(param_4 + 0x48) = iVar1;
    if (3 < iVar1) {
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      uVar11 = *(undefined4 *)(param_4 + 0x20);
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_WaitForSeconds___ctor_43ca4f4(uVar11,uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar5);
      uVar11 = 1;
      goto LAB_024af028;
    }
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    if (lVar10 == 0) goto LAB_024af054;
    if (*(long *)(lVar10 + 0x20) == 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x70);
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbfb0);
    System_Collections_Generic_List_byte____ctor_39fa3d8
              (uVar5,uVar8,*(undefined8 *)PTR_DAT_04cbc378);
    *(undefined8 *)(param_4 + 0x40) = uVar5;
    thunk_FUN_02134474((undefined8 *)(param_4 + 0x40),uVar5);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_024af054;
    lVar9 = *(long *)(lVar10 + 0xb8);
    Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(param_4 + 0x28),0);
    if (lVar9 == 0) goto LAB_024af054;
    Dino_BusSand_View_Fx__Glow_2398b34(lVar9,0);
    *(undefined4 *)(param_4 + 0x48) = 0;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_4 + 0x48);
  if (iVar1 == 3) {
    uVar7 = (uint)*(byte *)(param_4 + 0x38);
  }
  else {
    lVar9 = *(long *)(param_4 + 0x40);
    if (lVar9 == 0) goto LAB_024af054;
    uVar11 = UnityEngine_Random__Range_43b64e8(0,*(undefined4 *)(lVar9 + 0x18),0);
    uVar7 = System_Collections_Generic_List_byte___get_Item_39fa834
                      (lVar9,uVar11,*(undefined8 *)PTR_DAT_04cbbfa8);
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    Dino_BusSand_View_VehicleView__SetColor_23fb3dc(*(long *)(param_4 + 0x28),uVar7,0,0);
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar11 = *(undefined4 *)(&UNK_00e69c30 + (ulong)(iVar1 == 3) * 4);
      Dino_BusSand_View_VehicleView__Kick_23fd8a0
                (*(undefined4 *)(&UNK_00e6a0b8 + (ulong)(iVar1 == 3) * 4),*(long *)(param_4 + 0x28),
                 0);
      if (iVar1 == 3) {
        if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_View_GameView__FireColor_23a91ac(uVar7,0);
        uVar7 = Dino_BusSand_View_GameView__Vivid_23a906c(uVar4,uVar7 & 0xff,0);
        if ((lVar10 == 0) || (*(long *)(param_4 + 0x28) == 0)) goto LAB_024af054;
        lVar9 = *(long *)(lVar10 + 0xb8);
        Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(param_4 + 0x28),0);
        if (lVar9 == 0) goto LAB_024af054;
        fVar12 = (float)(uVar7 & 0xff) / 255.0;
        fVar13 = (float)(uVar7 >> 0x10 & 0xff) / 255.0;
        fVar14 = (float)(uVar7 >> 0x18) / 255.0;
        fVar15 = (float)(uVar7 >> 8 & 0xff) / 255.0;
        Dino_BusSand_View_Fx__Ring_2398a10(lVar9,0);
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_024af054;
        lVar10 = *(long *)(lVar10 + 0xb8);
        uVar4 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(param_4 + 0x28),0);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (fVar12 + (1.0 - fVar12) * _UNK_00e20328,fVar15 + (1.0 - fVar15) * _UNK_00e20328,
                   fVar13 + (1.0 - fVar13) * _UNK_00e20328,fVar14 + (1.0 - fVar14) * _UNK_00e20328,
                   &uStack_88,*(undefined8 *)PTR_DAT_04cac878);
        if (lVar10 == 0) goto LAB_024af054;
        uStack_98 = uStack_80;
        uStack_a0 = uStack_88;
        uStack_90 = uStack_78;
        Dino_BusSand_View_Fx__Stars_2392818
                  (uVar4,uVar11,param_3,_UNK_00e1feac,_UNK_00e2098c,0,0,0,lVar10,2,&uStack_a0,0);
      }
      puVar2 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      if (**(long **)(lVar10 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Blip_2382930
                  ((float)*(int *)(param_4 + 0x48) * _UNK_00e20328 + 1.0,**(long **)(lVar10 + 0xb8),
                   0);
      }
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caaa78);
      UnityEngine_WaitForSeconds___ctor_43ca4f4(_UNK_00e207dc,uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar5);
      uVar11 = 2;
LAB_024af028:
      *(undefined4 *)(param_4 + 0x10) = uVar11;
      return 1;
    }
  }
LAB_024af054:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

