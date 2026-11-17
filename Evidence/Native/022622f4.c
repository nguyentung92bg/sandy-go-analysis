/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass40_0$$<Color>b__0
void Dino_BusSand_App_Tween___c__DisplayClass40_0___Color_b__0 (Dino_BusSand_App_Tween___c__DisplayClass40_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass40_0$$<Color>b__0
   void Dino_BusSand_App_Tween___c__DisplayClass40_0___Color_b__0
   (Dino_BusSand_App_Tween___c__DisplayClass40_0_o* __this, float k, const MethodInfo* method); */

void Dino_BusSand_App_Tween___c__DisplayClass40_0___Color_b__0_21622f4(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    fVar2 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x02262328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (fVar2 + ((float)*(undefined8 *)(param_2 + 0x28) - fVar2) * param_1,
               fVar3 + ((float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) - fVar3) * param_1,
               fVar4 + ((float)*(undefined8 *)(param_2 + 0x30) - fVar4) * param_1,
               fVar5 + ((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) - fVar5) * param_1,
               *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

