/* IL2CPP: Dino.BusSand.View.PropKit.<>c__DisplayClass27_0$$<Padlock>b__0
void Dino_BusSand_View_PropKit___c__DisplayClass27_0___Padlock_b__0 (Dino_BusSand_View_PropKit___c__DisplayClass27_0_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c__DisplayClass27_0$$<Padlock>b__0
   void Dino_BusSand_View_PropKit___c__DisplayClass27_0___Padlock_b__0
   (Dino_BusSand_View_PropKit___c__DisplayClass27_0_o* __this,
   Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c__DisplayClass27_0___Padlock_b__0_23e3564
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca72 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca72 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  uVar1 = _UNK_00e20390;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (0,_UNK_00e20390,0,_UNK_00e1ff28,_UNK_00e20324,_UNK_00e208cc,param_2);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
  Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8
            (0,_UNK_00e20104,0,_UNK_00e20328,_UNK_00e20af8,param_2,0xc,6);
  uVar2 = _UNK_00e20754;
  Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
            (0,uVar1,_UNK_00e20658,0,uVar1,_UNK_00e20754,_UNK_00e2043c,_UNK_00e2043c,param_2,8);
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
            (0,_UNK_00e205f0,_UNK_00e20638,_UNK_00e1fef8,uVar2,_UNK_00e20448,param_2);
  return;
}

