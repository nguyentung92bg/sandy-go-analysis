/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_FencePanel>b__24_0
void Dino_BusSand_View_PropKit___c___get_FencePanel_b__24_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_FencePanel>b__24_0
   void Dino_BusSand_View_PropKit___c___get_FencePanel_b__24_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_FencePanel_b__24_0_23e1740(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000004f9ca66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca66 = 1;
  }
  puVar11 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  puVar10 = PTR_DAT_04cab4b0;
  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = _UNK_00e207cc;
  fVar7 = _UNK_00e206cc;
  uVar3 = _UNK_00e205f8;
  uVar2 = _UNK_00e20094;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (_UNK_00e206cc,_UNK_00e207cc,0,_UNK_00e205f8,_UNK_00e20094,_UNK_00e205f8,param_2);
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (_UNK_00e1fdd8,uVar4,0,uVar3,uVar2,uVar3,param_2);
  uVar9 = _UNK_00e207dc;
  uVar8 = _UNK_00e20754;
  fVar6 = _UNK_00e2067c;
  uVar5 = _UNK_00e20664;
  uVar4 = _UNK_00e2043c;
  uVar3 = _UNK_00e201f4;
  uVar2 = _UNK_00e20174;
  uVar12 = 0;
  do {
    if ((uVar12 & 1) == 0) {
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
    }
    else if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar10);
      cRam0000000004f9b88b = '\x01';
    }
    uVar1 = uVar12 + 1;
    fVar13 = ((float)(int)uVar12 * fVar6) / 6.0 + fVar7;
    fVar14 = ((float)(int)uVar1 * fVar6) / 6.0 + fVar7;
    fVar15 = fVar14 - fVar13;
    fVar13 = (fVar13 + fVar14) * 0.5;
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4(fVar13,uVar5,0,fVar15,uVar3,uVar2,param_2);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar10);
      cRam0000000004f9b88b = '\x01';
    }
    if ((uVar12 & 1) == 0) {
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
    }
    else if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4(fVar13,uVar9,0,fVar15,uVar8,uVar4,param_2);
    uVar12 = uVar1;
  } while (uVar1 != 6);
  return;
}

