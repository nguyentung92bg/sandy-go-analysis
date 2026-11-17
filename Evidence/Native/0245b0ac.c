/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$Save
void Dino_BusSand_Cheat_CheatConfig__Save (Dino_BusSand_Cheat_CheatConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$Save
   void Dino_BusSand_Cheat_CheatConfig__Save (Dino_BusSand_Cheat_CheatConfig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatConfig__Save_235b0ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = Dino_BusSand_Cheat_CheatConfig__get_FilePath_2359a40();
  uVar2 = UnityEngine_JsonUtility__ToJson_44323b4(param_1,1,0);
                    /* try { // try from 0245b0d0 to 0255b0d3 has its CatchHandler @ 0245b104 */
                    /* try { // try from 0245b0d4 to 0255b0d7 has its CatchHandler @ 0245b0f8 */
                    /* try { // try from 0245b0d8 to 0255b127 has its CatchHandler @ 0245ad3c */
  System_IO_File__WriteAllText_47f90d8(uVar1,uVar2,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245b00c with catch @ 0245b0e4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245b010 with catch @ 0245b0e8
                        */
  return;
}

