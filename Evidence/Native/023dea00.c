/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$Range
float Dino_BusSand_App_UI_HomeBeach__Range (Dino_BusSand_App_UI_HomeBeach_o* __this, float a, float b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$Range
   float Dino_BusSand_App_UI_HomeBeach__Range (Dino_BusSand_App_UI_HomeBeach_o* __this, float a,
   float b, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeBeach__Range_22dea00(float param_1,float param_2,long param_3)

{
  double dVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_3 + 0x48);
  if (plVar2 != (long *)0x0) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    return (param_2 - param_1) * (float)dVar1 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

