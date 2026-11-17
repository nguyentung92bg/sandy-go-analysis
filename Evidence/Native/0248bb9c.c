/* IL2CPP: Dino.BusSand.Tween$$Kill
void Dino_BusSand_Tween__Kill (Dino_BusSand_Tween_o* __this, bool complete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween$$Kill
   void Dino_BusSand_Tween__Kill (Dino_BusSand_Tween_o* __this, bool complete, const MethodInfo*
   method); */

void Dino_BusSand_Tween__Kill_238bb9c(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (*(undefined1 *)(param_1 + 0x10) = 0, (param_2 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (0x3f800000,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
    lVar1 = *(long *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x11) = 1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0248bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

