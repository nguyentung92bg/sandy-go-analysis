/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WinMultiplierFixed
bool Dino_BusSand_App_Meta_Monetization__get_WinMultiplierFixed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WinMultiplierFixed
   bool Dino_BusSand_App_Meta_Monetization__get_WinMultiplierFixed (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Monetization__get_WinMultiplierFixed_2267354(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = Dino_BusSand_App_Meta_Monetization__get_WinMultipliers_2266eb4();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if (uVar1 == uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    } while ((*(int *)(lVar2 + (long)(int)uVar3 * 4 + 0x20) == *(int *)(lVar2 + 0x20)) &&
            (uVar3 = uVar3 + 1, (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar3));
  }
  return (int)uVar1 <= (int)uVar3;
}

