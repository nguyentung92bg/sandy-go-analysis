/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass119_0$$<OnLiftRaised>b__1
void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0___OnLiftRaised_b__1 (Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass119_0$$<OnLiftRaised>b__1
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0___OnLiftRaised_b__1
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0___OnLiftRaised_b__1_23d4710
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca12 = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    uVar8 = 0;
    Dino_BusSand_View_VehicleView__Kick_23fd8a0(0x3e800000,0,*(long *)(param_4 + 0x10),0);
                    /* try { // try from 024d4794 to 025d479b has its CatchHandler @ 024d4880 */
    if (*(long *)(param_4 + 0x18) != 0) {
                    /* try { // try from 024d479c to 025d4873 has its CatchHandler @ 024d4578 */
      lVar3 = Dino_BusSand_View_MechanicLayer__get_FxLive_23bed30(*(long *)(param_4 + 0x18),0);
      if (lVar3 == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x10) != 0) {
        uVar5 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(param_4 + 0x10),0);
        if (*(long *)(param_4 + 0x18) != 0) {
          fVar6 = (float)Dino_BusSand_View_MechanicLayer__get_FxU_23bec9c
                                   (*(long *)(param_4 + 0x18),0);
          if (*(long *)(param_4 + 0x18) != 0) {
            fVar7 = (float)Dino_BusSand_View_MechanicLayer__get_FxU_23bec9c
                                     (*(long *)(param_4 + 0x18),0);
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            Dino_BusSand_View_Fx__StarsFlat_2398d44
                      (uVar5,uVar8,param_3,fVar6 * _UNK_00e2032c,fVar7 * _UNK_00e200f8,lVar3,3,
                       &uStack_58,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

