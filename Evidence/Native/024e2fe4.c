/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Ladder>b__47_0
void Dino_BusSand_View_PropKit___c___get_Ladder_b__47_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Ladder>b__47_0
   void Dino_BusSand_View_PropKit___c___get_Ladder_b__47_0 (Dino_BusSand_View_PropKit___c_o* __this,
   Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_Ladder_b__47_0_23e2fe4(undefined8 param_1,long param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((bRam0000000004f9ca70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca70 = 1;
  }
  puVar6 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  puVar5 = PTR_DAT_04cab4b0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = _UNK_00e20174;
  uVar2 = _UNK_00e1feac;
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (_UNK_00e20050,0,0,_UNK_00e20174,_UNK_00e20174,_UNK_00e1feac,param_2);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4(_UNK_00e20aec,0,0,uVar4,uVar4,uVar2,param_2);
    uVar4 = _UNK_00e20af8;
    uVar2 = _UNK_00e205ac;
    fVar3 = _UNK_00e20044;
    fVar1 = _UNK_00e1fe90;
    iVar7 = 0;
    do {
      if (cRam0000000004f9b88b == '\0') {
        FUN_02132f7c(puVar5);
        cRam0000000004f9b88b = '\x01';
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
                (0,0,(float)iVar7 * fVar1 + fVar3,uVar2,uVar4,uVar4,param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

