/* IL2CPP: Dino.BusSand.View.VehicleView$$EnterRoad
void Dino_BusSand_View_VehicleView__EnterRoad (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$EnterRoad
   void Dino_BusSand_View_VehicleView__EnterRoad (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__EnterRoad_23feb40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_1,4);
  uVar2 = _UNK_00e6ae48;
  uVar1 = _UNK_00e6ae40;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  Dino_BusSand_View_VehicleView__EnsureLabel_23fb7a4(param_1);
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0), lVar3 != 0
     )) {
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
    *(undefined8 *)(param_1 + 0x274) = 0;
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0xbf800000;
    Dino_BusSand_View_VehicleView__SetPercent_23fbeb4(0,param_1);
    *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) + _UNK_00e204b4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

