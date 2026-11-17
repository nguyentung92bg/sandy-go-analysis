/* IL2CPP: Dino.BusSand.View.GameView$$VehicleOf
Dino_BusSand_View_VehicleView_o* Dino_BusSand_View_GameView__VehicleOf (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$VehicleOf
   Dino_BusSand_View_VehicleView_o* Dino_BusSand_View_GameView__VehicleOf
   (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__VehicleOf_23ab408(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c952 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    bRam0000000004f9c952 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0xe0),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar1 & 1) == 0) {
      uStack_28 = 0;
    }
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

