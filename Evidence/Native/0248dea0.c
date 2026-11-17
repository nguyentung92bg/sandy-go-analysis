/* IL2CPP: Dino.BusSand.View.ArtPack$$get_Active
bool Dino_BusSand_View_ArtPack__get_Active (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ArtPack$$get_Active
   bool Dino_BusSand_View_ArtPack__get_Active (const MethodInfo* method); */

bool Dino_BusSand_View_ArtPack__get_Active_238dea0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbf48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8b7 = 1;
  }
  uVar2 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
                    /* try { // try from 0248dee0 to 0258df0b has its CatchHandler @ 0248e094 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x90);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        return false;
      }
                    /* try { // try from 0248df40 to 0258df4b has its CatchHandler @ 0248e08c */
      lVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
      if (lVar4 != 0) {
        uVar2 = *(undefined8 *)(lVar4 + 0x98);
                    /* try { // try from 0248df50 to 0258df57 has its CatchHandler @ 0248e084 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
                    /* try { // try from 0248df70 to 0258df73 has its CatchHandler @ 0248e074 */
        if ((uVar3 & 1) == 0) {
          return false;
        }
        lVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
        if (lVar4 != 0) {
                    /* try { // try from 0248df80 to 0258df9b has its CatchHandler @ 0248e078 */
          uVar2 = *(undefined8 *)(lVar4 + 0xa0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
                    /* try { // try from 0248df9c to 0258e04f has its CatchHandler @ 0248dcc0 */
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
          if ((uVar3 & 1) == 0) {
            return false;
          }
          lVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x50) != 0)) {
            return 0 < *(int *)(*(long *)(lVar4 + 0x50) + 0x18);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return false;
}

