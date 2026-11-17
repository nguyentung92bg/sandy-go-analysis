/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_ShiftBadge>b__49_0
void Dino_BusSand_View_PropKit___c___get_ShiftBadge_b__49_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_ShiftBadge>b__49_0
   void Dino_BusSand_View_PropKit___c___get_ShiftBadge_b__49_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_ShiftBadge_b__49_0_23e325c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if ((bRam0000000004f9ca71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca71 = 1;
  }
  puVar4 = PTR_DAT_04cbd088;
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,0,0,0,_UNK_00e2043c,0,_UNK_00e203f4,_UNK_00e203f4,param_2,0x14);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = _UNK_00e20a94;
    uVar2 = _UNK_00e20a84;
    uVar1 = _UNK_00e207dc;
    Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8
              (0,_UNK_00e20a94,0,_UNK_00e207dc,_UNK_00e20a84,param_2,0xe,5);
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8(0,uVar3,0,uVar1,uVar2,param_2,0xe,5);
    uVar2 = _UNK_00e20754;
    uVar1 = _UNK_00e205f0;
    Dino_BusSand_View_PropKit_MeshBuilder__ConeAt_23e06a4
              (_UNK_00e208a8,uVar3,_UNK_00e20148,_UNK_00e206d0,0,_UNK_00e208ac,_UNK_00e20754,
               _UNK_00e205f0,param_2);
    Dino_BusSand_View_PropKit_MeshBuilder__ConeAt_23e06a4
              (_UNK_00e20ad4,uVar3,_UNK_00e202ac,_UNK_00e20078,0,_UNK_00e20a50,uVar2,uVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

