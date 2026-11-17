/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Blink
void Dino_BusSand_App_UI_HomeToonFace__Blink (Dino_BusSand_App_UI_HomeToonFace_o* __this, bool twice, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Blink
   void Dino_BusSand_App_UI_HomeToonFace__Blink (Dino_BusSand_App_UI_HomeToonFace_o* __this, bool
   twice, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(long param_1,byte param_2)

{
  double dVar1;
  long *plVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0x60) < 0.0) {
    plVar2 = *(long **)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 0x69) = param_2 & 1;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar3 = *(float *)(param_1 + 0x58);
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    *(float *)(param_1 + 0x5c) = fVar3 + (float)dVar1 * _UNK_00e20a24 + _UNK_00e1feac;
  }
  return;
}

