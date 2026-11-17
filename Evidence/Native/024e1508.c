/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Cone>b__22_0
void Dino_BusSand_View_PropKit___c___get_Cone_b__22_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_Cone>b__22_0
   void Dino_BusSand_View_PropKit___c___get_Cone_b__22_0 (Dino_BusSand_View_PropKit___c_o* __this,
   Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_Cone_b__22_0_23e1508(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if ((bRam0000000004f9ca65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca65 = 1;
  }
  puVar5 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = _UNK_00e205f8;
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              (0,_UNK_00e20af8,0,_UNK_00e20258,_UNK_00e205f8,_UNK_00e20258,param_2);
    uVar2 = _UNK_00e20104;
    uVar1 = _UNK_00e20004;
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,uVar3,0,0,_UNK_00e20104,0,0x3e800000,_UNK_00e20004,param_2,0xe);
    uVar4 = _UNK_00e208e8;
    uVar3 = _UNK_00e201f4;
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,uVar2,0,0,_UNK_00e208e8,0,uVar1,_UNK_00e201f4,param_2,0xe);
    Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
              (0,uVar4,0,0,_UNK_00e1fecc,0,uVar3,_UNK_00e20844,param_2,0xe);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

