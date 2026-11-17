/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_LiftPlate>b__33_0
void Dino_BusSand_View_PropKit___c___get_LiftPlate_b__33_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_LiftPlate>b__33_0
   void Dino_BusSand_View_PropKit___c___get_LiftPlate_b__33_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_LiftPlate_b__33_0_23e2138(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000004f9ca69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca69 = 1;
  }
  puVar8 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  puVar7 = PTR_DAT_04cab4b0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (0,_UNK_00e200b8,0,0x3f800000,_UNK_00e2043c,0x3f800000,param_2);
  uVar6 = _UNK_00e20af8;
  uVar5 = _UNK_00e20840;
  uVar4 = _UNK_00e20664;
  uVar3 = _UNK_00e20580;
  uVar2 = _UNK_00e204a8;
  uVar9 = 0;
  do {
    iVar1 = *(int *)(*(long *)puVar8 + 0xe4);
    if ((uVar9 & 1) == 0) {
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
    }
    else if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar7);
      cRam0000000004f9b88b = '\x01';
    }
    fVar10 = (float)(int)uVar9;
    uVar9 = uVar9 + 1;
    fVar10 = fVar10 / 8.0 + -0.5;
    fVar11 = (float)(int)uVar9 / 8.0 + -0.5;
    fVar12 = fVar11 - fVar10;
    fVar10 = (fVar10 + fVar11) * 0.5;
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (fVar10,uVar2,uVar4,fVar12,uVar5,uVar6,param_2);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar7);
      cRam0000000004f9b88b = '\x01';
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (fVar10,uVar2,uVar3,fVar12,uVar5,uVar6,param_2);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar7);
      cRam0000000004f9b88b = '\x01';
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (uVar4,uVar2,fVar10,uVar6,uVar5,fVar12,param_2);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar7);
      cRam0000000004f9b88b = '\x01';
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (uVar3,uVar2,fVar10,uVar6,uVar5,fVar12,param_2);
  } while (uVar9 != 8);
  return;
}

