/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_ChainLink>b__43_0
void Dino_BusSand_View_PropKit___c___get_ChainLink_b__43_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_ChainLink>b__43_0
   void Dino_BusSand_View_PropKit___c___get_ChainLink_b__43_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_ChainLink_b__43_0_23e2c38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9ca6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca6e = 1;
  }
  puVar1 = PTR_DAT_04cbd088;
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar2 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20418,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (param_2 != 0) {
    Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8
              (uVar3,uVar4,uVar5,_UNK_00e20474,_UNK_00e205d4,param_2,10,5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

