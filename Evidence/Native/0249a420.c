/* IL2CPP: Dino.BusSand.View.GameView$$remove_RoadFullTapped
void Dino_BusSand_View_GameView__remove_RoadFullTapped (Dino_BusSand_View_GameView_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$remove_RoadFullTapped
   void Dino_BusSand_View_GameView__remove_RoadFullTapped (Dino_BusSand_View_GameView_o* __this,
   System_Action_o* value, const MethodInfo* method); */

void Dino_BusSand_View_GameView__remove_RoadFullTapped_239a420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9c8fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    bRam0000000004f9c8fd = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  lVar5 = *(long *)(param_1 + 0x50);
  while ((plVar3 = (long *)System_Delegate__Remove_4872510(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_0216aff4((long *)(param_1 + 0x50),plVar3,lVar5);
    bVar2 = lVar4 == lVar5;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021335a4(plVar3);
}

