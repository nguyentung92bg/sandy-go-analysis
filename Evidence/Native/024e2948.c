/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_BoomArm>b__39_0
void Dino_BusSand_View_PropKit___c___get_BoomArm_b__39_0 (Dino_BusSand_View_PropKit___c_o* __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.<>c$$<get_BoomArm>b__39_0
   void Dino_BusSand_View_PropKit___c___get_BoomArm_b__39_0 (Dino_BusSand_View_PropKit___c_o*
   __this, Dino_BusSand_View_PropKit_MeshBuilder_o* b, const MethodInfo* method); */

void Dino_BusSand_View_PropKit___c___get_BoomArm_b__39_0_23e2948(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  float fVar6;
  
  if ((bRam0000000004f9ca6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca6c = 1;
  }
  puVar4 = PTR_DAT_04cbd088;
  puVar3 = PTR_DAT_04cab4b0;
  uVar2 = _UNK_00e20a94;
  uVar1 = _UNK_00e20658;
  uVar5 = 0;
  while( true ) {
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(puVar3);
      cRam0000000004f9b88b = '\x01';
    }
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
    }
    else if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (param_2 == 0) break;
    fVar6 = (float)(int)uVar5;
    uVar5 = uVar5 + 1;
    Dino_BusSand_View_PropKit_MeshBuilder__Box_23dede4
              ((fVar6 / 6.0 + (float)(int)uVar5 / 6.0) * 0.5,0,0,
               (float)(int)uVar5 / 6.0 - fVar6 / 6.0,uVar1,uVar2,param_2);
    if (uVar5 == 6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

