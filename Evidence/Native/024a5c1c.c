/* IL2CPP: Dino.BusSand.View.GameView$$PanOfTruck
float Dino_BusSand_View_GameView__PanOfTruck (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$PanOfTruck
   float Dino_BusSand_View_GameView__PanOfTruck (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__PanOfTruck_23a5c1c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000004f9c933 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    bRam0000000004f9c933 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0xe0),param_2,&lStack_28,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar1 & 1) != 0) {
      if ((lStack_28 == 0) ||
         (lVar2 = UnityEngine_Component__get_transform_43bcd18(0,lStack_28,0), lVar2 == 0))
      goto LAB_024a5cb0;
      UnityEngine_Transform__get_position_43d0e48(lVar2,0);
      Dino_BusSand_View_GameView__PanOf_23a7184(param_1);
    }
    return;
  }
LAB_024a5cb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

