/* IL2CPP: Dino.BusSand.View.GameView$$FillOf
float Dino_BusSand_View_GameView__FillOf (Dino_BusSand_View_GameView_o* __this, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$FillOf
   float Dino_BusSand_View_GameView__FillOf (Dino_BusSand_View_GameView_o* __this, int32_t truckId,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__FillOf_23a5bd8(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_8;
  
  lStack_8 = 0;
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar1 != 0)) {
    uVar2 = Dino_BusSand_Core_Road__TryGet_24127e0(lVar1,param_3,&lStack_8,0);
    param_1 = 0x3f000000;
    if ((uVar2 & 1) != 0) {
      if (lStack_8 == 0) goto LAB_024a5c18;
      Dino_BusSand_Core_RoadBus__get_Progress_2411810(lStack_8,0);
    }
    return;
  }
LAB_024a5c18:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(param_1);
}

